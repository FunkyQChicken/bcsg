
class Button < Block

  @bools : Hash(String,Bool)

  @style_normal : Array(SF::Texture)
  @style_pressed : Array(SF::Texture)

  def initialize(strings, bools, name, parent = nil, properties = nil)
    super
    @bools = bools
    @bools[@name] = false
    @style_normal  = Block.get_style("button_template/normal")
    @style_pressed = Block.get_style("button_template/pressed")
  end

  def get_bool
    @bools[@name]
  end

  def draw(window : SF::Window)
    draw_panel(window, @clicked ? @style_pressed : @style_normal)
    super
  end

  def mouse_click(x, y)
    return false if !in_bounds?(x, y)
    @clicked = true
    @bools[@name] = true
    return true
  end

  def mouse_release()
    @clicked = false
  end
end
