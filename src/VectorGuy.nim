import 
  sdl2/sdl,
  input,
  art,
  tiled,
  body,
  ecs,
  maths,
  math,
  systems/physics,
  systems/player,
  systems/renderable,
  scenery,
  assets,
  platform

if platform.init((1280, 720), "Hello World") == Failure:
  discard

initInput()

# Loading assets
assets.add(R2D.loadImage "assets/images/player.png", "player")
assets.add(R2D.loadImage "assets/images/tilesheet.png", "tiles")

let map = loadTiledMap "assets/maps/map_1.tmx"

let player_ent = EntityWorld.createEntity()
player_ent.add(newBody(100, 0, 10, 25))
player_ent.add(newPhysicsBody())
player_ent.add(newSprite(assets.get(Image, "player"), newRegion(0, 0, 10, 25)))
player_ent.add(Player())

SetTiledObjects(map.objects)

# Game loop
while CurrentGameState() != Quiting:
  discard R2D.setRenderDrawColor(0x00, 0x00, 0x00, 0xFF)
  discard R2D.renderClear()

  inputUpdate()

  var e: sdl.Event
  while sdl.pollEvent(addr e) != 0:
    if e.kind == sdl.Quit: Quit()
    inputHandleEvent(e)

  platform.update()

  Scenery.update()
  EntityWorld.update()

  if isKeyPressed(Key.ESCAPE):
    Quit()

  MainCamera.zoom = 4
  
  EntityWorld.draw()
  R2D.drawTiledMap(map)
  Scenery.draw()

  R2D.renderPresent()
