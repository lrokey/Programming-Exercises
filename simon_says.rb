def echo (input)
	input
end

def shout (input)
	input.upcase
end

def repeat (input, repeat = 2)
	([input] * repeat).join ' '  
end

def start_of_word (input, n)
	input[0..n-1]
end

def first_word (input)
	input.split.first
end

def titleize (input)
	input.split.each{|i| i.capitalize!}.join(' ')
end