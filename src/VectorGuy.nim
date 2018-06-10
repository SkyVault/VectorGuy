import 
  sdl2/sdl,
  input,
  times,
  art,
  items,
  tiled,
  body,
  ecs,
  maths,
  math,
  random,
  systems/physics,
  systems/enemies,
  systems/player,
  systems/renderable,
  scenery,
  assets,
  platform

if platform.init((1280, 720), "Hello World") == Failure:
  discard

initInput()

let time = (200 * cpuTime() + epochTime()).int64
randomize(time)

# Loadeng assets
assets.add(R2D.loadImage "assets/images/player.png", "player")
assets.add(R2D.loadImage "assets/images/tilesheet.png", "tiles")
assets.add(R2D.loadImage "assets/images/walker_enemy.png", "walker_enemy")
assets.add(R2D.loadImage "assets/images/items.png", "items")

let map = loadTiledMap "assets/maps/map_1.tmx"

let player_ent = EntityWorld.createEntity()
player_ent.add(newBody(100, 0, 10, 25))
player_ent.add(newPhysicsBody())
player_ent.add(newSprite(assets.get(Image, "player"), newRegion(0, 0, 10, 25)))
player_ent.add(Player())

let walker = EntityWorld.createEntity()
walker.add(newBody(200 - 48, 0, 26, 21))
walker.add(newPhysicsBody())
walker.add(newSprite(assets.get(Image, "walker_enemy"), newRegion(0, 0, 26, 21)))
walker.add(newEnemy(EnemyType.Walker))

# createSword1(200 - 48, 256)
createSword1(200, 0)

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
