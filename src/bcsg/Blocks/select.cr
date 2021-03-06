
class Select < Block
  @strings : Hash(String,String)

  def initialize(strings, bools, name, parent = nil, properties = nil, gui = nil)
    super
    @strings = strings
    @strings[@name] = ""
    @options = [] of String
    @options = ["hello","world","!"]
    @index = 0
    @buttons = {} of String => Bool
    temp  = {} of String => String
    
    if !@properties.nil?
      prop = @properties.as(XML::Node)
      con = prop.content.split(" ")
      if con.size > 1
        @options = con 
      end
    end

    @left_button  = Button_Icon.new  temp, @buttons, "left",  nil, nil, get_gui 
    @right_button = Button_Icon.new  temp, @buttons, "right", nil, nil, get_gui  
    @label        = Text.new         temp, @buttons, "label", nil, nil, get_gui 
    @bar          = Bar.new          temp, @buttons, "bar",   nil, nil, get_gui

    @left_button.handle = "0,0"
    @left_button.dims   = "0,0,100o,100"
    @left_button.parent = self
    @left_button.set_textures("selector/left")

    @right_button.handle = "100,0"
    @right_button.dims   = "100,0,100o,100"
    @right_button.parent = self
    @right_button.set_textures("selector/right")

    @label.parent = self
    @label.dims   = "50,50,50,90"
    @label.handle = "50,50"

    @bar.parent = self 
    @bar.dims   = "50,100,50,10"
    @bar.handle = "50,0"

    @children << @label
    @children << @left_button
    @children << @right_button
    @children << @bar    

    @label.content = @options[@index]
    @label.update_text
  end

  def mouse_click(x,y)
    return false if !in_bounds?(x, y)
    super
    if @buttons["right"]
      @buttons["right"] = false
      @index += 1
    elsif @buttons["left"]
      @buttons["left"] = false
      @index -= 1
    end
    @index += @options.size
    @index %= @options.size
    @label.content = @options[@index]
    @strings[@name] = @options[@index]
    @label.update_size
  end
end
