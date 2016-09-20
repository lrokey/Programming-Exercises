# -*- encoding : utf-8 -*-
input = gets.chomp.to_i
factors = Array.new
y = 2
while y*y <= input do
  if input % y == 0
    factors.push(y)
    input /= y
  else
    y = y+1
  end
end
if input > 1
  factors.push(input)
end
factors.each{ |x| print "%i " % [x] }
puts
