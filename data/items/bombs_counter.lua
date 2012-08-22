local item = ...

-- Called when the player uses the bombs of his inventory by pressing the corresponding item key.
function item:on_using()

  if self:get_amount() == 0 then
    sol.audio.play_sound("wrong")
  else
    self:remove_amount(1)
    local x, y, layer = self:create_bomb()
    sol.audio.play_sound("bomb")
  end
  self:set_finished()
end

function item:create_bomb()

  local hero = self:get_map():get_hero()
  local x, y, layer = hero:get_position()
  local direction = hero:get_direction()
  if direction == 0 then
    x = x + 16
  elseif direction == 1 then
    y = y - 16
  elseif direction == 2 then
    x = x - 16
  elseif direction == 3 then
    y = y + 16
  end

  self:get_map():create_bomb(x, y, layer)
end

