import
  ../ecs,
  ../art,
  ../platform,
  ../body,
  ../maths

type
  Drawable* = ref object of Component
    color*: (float, float, float, float)

  RectangleComponent* = ref object of Drawable

  Sprite* = ref object of Drawable
    image* : Image
    region* : Region
    flip* : bool

proc newRectangleComponent* (): RectangleComponent=
  result = RectangleComponent(
    color: (1.0, 0.0, 0.0, 1.0)
  )

proc newSprite* (img: Image, reg: Region): Sprite=
  result = Sprite(
    image: img,
    region: reg,
    flip: false
  )

#(renderer: sdl.Renderer, x, y, w, h: float, rot=0.0)=
var RectRendererSystem = EntityWorld.createSystem(
  @["Body", "RectangleComponent"],
  load = proc(sys: System, self: Entity)=
    discard
  ,
  draw = proc(s: System, e: Entity)=
    let body = e.get(Body)
    let rect = e.get(RectangleComponent)

    R2D.rect(body.x, body.y, body.width, body.height)
  )

var SpriteRendererSystem = EntityWorld.createSystem(
  @["Body", "Sprite"],
  load = proc(sys: System, self: Entity)=
    discard
  ,

  draw = proc(s: System, e: Entity)=
    let body    = e.get Body
    let sprite  = e.get Sprite

    let img = sprite.image
    let reg = sprite.region
  
    R2D.draw(img, reg, body.x, body.y, 0.0, sprite.flip)
  )
