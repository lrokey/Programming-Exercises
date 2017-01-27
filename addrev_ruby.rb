# SPOJ addrev
t = gets.to_i
while t > 0
	a, b = gets.split.map(&:to_s)
	puts "a is #{a}"
	puts "b is #{b}"
	a = a.reverse.to_i
	b = b.reverse.to_i
	puts "reversed a is #{a}"
	puts "reversed b is #{b}"
	c = a + b
	c.to_s.reverse.to_i
	puts c
	t = t-1
end
