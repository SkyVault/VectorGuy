import
  ecs,
  maths

type
  Body* = ref object of Component
    position*, size*: V2

proc newBody* (x, y, w, h: float): Body=
  result = Body(
    position: Vec2(x, y),
    size: Vec2(w, h)
  )

proc contains* (body, other: Body): bool =
  return body.position.x + body.size.x > other.position.x and 
         body.position.x < other.position.x + other.size.x and
         body.position.y + body.size.y > other.position.y and 
         body.position.y < other.position.y + other.size.y
  
proc x* (b: Body): float= b.position.x
proc `x=`* (b: Body, v: float) = b.position.x = v

proc y* (b: Body): float= b.position.y
proc `y=`* (b: Body, v: float) = b.position.y = v

proc width* (b: Body): float= b.size.x
proc `width=`* (b: Body, v: float) = b.size.x = v

proc height* (b: Body): float= b.size.y
proc `height=`* (b: Body, v: float) = b.size.y = v

proc center* (b: Body): V2= Vec2(b.x + b.width / 2, b.y + b.height / 2)

proc `$`* (o: Body): string=
  result = "Body { x: " & $o.x & ", y: " & $o.y & ", w: " & $o.width & ", h: " & $o.height & "}"
