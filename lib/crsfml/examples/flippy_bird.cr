require "crsfml"


mode = SF::VideoMode.new(800, 600)
window = SF::RenderWindow.new(mode, "pɹıq ʎddılɟ")
window.vertical_sync_enabled = true

bird_texture = SF::Texture.from_file("resources/bird.png")

bird = SF::Sprite.new(bird_texture)
bird.origin = bird_texture.size / 2.0
bird.scale = SF.vector2(2.5, 2.5)
bird.position = SF.vector2(250, 300)

speed = 0.0

while window.open?
  while event = window.poll_event()
    case event
    when SF::Event::Closed
      window.close()
    when SF::Event::KeyPressed
      if event.code.escape?
        window.close()
      else
        speed = -9.0
      end
    end
  end

  speed += 0.3
  bird.move SF.vector2(0.0, speed)
  bird.rotation = {speed*8.0, 90.0}.min

  window.clear SF::Color.new(112, 197, 206)
  window.draw bird
  window.display()
end
