import
  ../ecs,
  ../art,
  ../platform,
  ../body,
  renderable,
  physics,
  ../input,
  ../maths

type
  Player* = ref object of Component

proc newPlayer* (): Player=
  result = Player()

const SPEED = 300.0

#(renderer: sdl.Renderer, x, y, w, h: float, rot=0.0)=
var PlayerController = EntityWorld.createSystem(
  @["Body", "Player", "PhysicsBody", "Sprite"],
  load = proc(sys: System, self: Entity)=
    discard
  ,
  update = proc(s: System, e: Entity)=
    let body = e.get Body
    let phys = e.get PhysicsBody
    let sprite = e.get Sprite

    if isKeyDown(Key.LEFT):
      phys.velocity.x -= SPEED * GameClock.dt
      sprite.flip = true

    if isKeyDown(Key.RIGHT):
      phys.velocity.x += SPEED * GameClock.dt
      sprite.flip = false

    if isKeyDown(Key.z) and phys.isOnGround:
      phys.velocity.y -= 400.0

    var camera = MainCamera()

    let (ww, hh) = platform.windowSize()
    let w = (ww.float) / camera.zoom
    let h = (hh.float) / camera.zoom

    let x = body.x + phys.velocity.x * 0.5
    let y = body.y

    let dx = ((camera.x + w * 0.5) - x)
    let dy = ((camera.y + h * 0.5) - y)
    
    camera.position.x -= dx * 0.1
    camera.position.y -= dy * 0.1
  )
