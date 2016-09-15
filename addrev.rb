def reverseInts (number)
	y = 0
	while(number > 0)
		y = y*10
		y = y + (number % 10)
		number = number/10
	end
	return y
end

testCases = gets.chomp.to_i
solution = Array.new
while testCases > 0 do
	a, b = gets.split.map(&:to_i)
	a = reverseInts(a)
	b = reverseInts(b)
	c = a.to_i + b.to_i
	solution.push(reverseInts(c))
	testCases = testCases - 1
end
solution.each{ |x| puts x }


