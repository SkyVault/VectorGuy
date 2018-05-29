import
  ../ecs,
  ../platform.nim,
  ../maths,
  ../art,
  ../body,
  ../tiled,
  math

type
  PhysicsType* {.pure.} = enum
    Static,
    Dynamic,
    Sensor,
    Ladder

  PhysicsBody* = ref object of Component
    velocity*: V2
    friction*: float
    isOnGround*: bool
    isOnLadder*: bool
    gravity_scale: float
    physicsType: PhysicsType

  PhysicsObject* = ref object of Body
    physicsType: PhysicsType

const GRAVITY = (0.0, 600.0)

proc newPhysicsObject* (x, y, w, h: float, typeName: string): PhysicsObject=
  result = PhysicsObject(
    physicsType: PhysicsType.Static,
    position: Vec2(x, y),
    size: Vec2(w, h)
  )

  case typeName:
  of "Ladder":
    result.physicsType = PhysicsType.Ladder
  else: discard

proc newPhysicsBody* (vx = 0.0, vy = 0.0): PhysicsBody=
  result = PhysicsBody(
    velocity: Vec2(vx, vy),
    friction: 0.02,
    gravity_scale: 1.0,
    isOnGround: false,
    isOnLadder: false,
    physicsType: PhysicsType.Dynamic
  )

var tiledObjects = newSeq[PhysicsObject]()
proc SetTiledObjects* (objs: seq[TiledObject])=
  for o in objs:
    tiledObjects.add(newPhysicsObject(
      o.x, o.y, o.width, o.height,
      o.typeName
    ))

var PhysicsSystem = EntityWorld.createSystem(
  @["Body", "PhysicsBody"],

  load = proc(sys: System, self: Entity)=
    discard
    #tiledObjects.setLen(0)
  ,

  update = proc(sys: System, self: Entity)=
    var body = self.get Body
    var phys = self.get PhysicsBody

    var scaled_y_gravity = GRAVITY[1] * phys.gravity_scale
    scaled_y_gravity *= (if phys.velocity.y > 0: 2.0 else: 1.0)

    if not phys.isOnLadder:
      phys.velocity.y += scaled_y_gravity * GameClock.dt
     
    var xbody = newBody(body.x + phys.velocity.x * GameClock.dt, body.y, body.width, body.height)
    var ybody = newBody(body.x, body.y + phys.velocity.y * GameClock.dt, body.width, body.height)

    phys.isOnGround = false
    phys.isOnLadder = false

    for o in tiledObjects:
      if o.contains(xbody) and o.physicsType != PhysicsType.Ladder:
        xbody = body
      
      if o.contains(ybody):
        phys.isOnGround = true
        phys.velocity.y = 0

        if o.physicsType == PhysicsType.Ladder:
          phys.isOnLadder = true
        else:
          ybody.y = o.y - ybody.height


    phys.velocity *= math.pow(phys.friction, GameClock.dt)

    body.position = Vec2(xbody.x, ybody.y)
  
  ,
  preDraw = proc(s: System)=
    for o in tiledObjects:
      R2D.lineRect(o.x, o.y, o.width, o.height)
  )

