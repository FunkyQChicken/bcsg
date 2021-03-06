
class Text < Block
  property content : String
  
  @font : SF::Font
  @color : SF::Color

  def initialize(strings, bools, name, parent = nil, properties = nil, gui = nil)
    super
    @font  = get_gui.get_font("font.ttf")
    @color = SF::Color::Black 
    @content = "hello world!"
    @text = SF::Text.new("", @font)
  end

  def get_sprites
    @text.position = {@x, @y}
    @text.color = @color
    ret = super 
    ret << @text 
    return ret
  end 

  def update_text
    @text = SF::Text.new(@content, @font)
  end

  def set_size
    if !@parent.nil?
      par = @parent.as(Block)
      perc_x, perc_y, perc_w, perc_h = @dims.split(",")
      hand_x, hand_y = @handle.split(",")

      get_length =
      -> (str : String, default : Int32, other : Int32) do
        if str[-1] == 'o'
          perc = str[0, str.size - 1].to_i
          return (other * perc) / 100
        else
          perc = str.to_i
          return (default * perc) / 100
        end
      end

      @height = get_length.call(perc_h, par.height, par.width)
      @text.character_size = @height
      @width = @text.global_bounds.width.to_i

      x_offs  = get_length.call(hand_x, @width, @height)
      y_offs  = get_length.call(hand_y, @height, @width)

      @x      = get_length.call(perc_x, par.width, par.height) + par.x - x_offs
      @y      = get_length.call(perc_y, par.height, par.width) + par.y - y_offs

    end
  end
  
  def update_size
    update_text
    super
  end
end
