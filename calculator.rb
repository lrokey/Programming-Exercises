#write your code here
def add (num1, num2)
	num1 + num2
end

def subtract (num1, num2)
	num1 - num2
end

def sum (array_of_numbers)
  sum = 0
  for i in 0...array_of_numbers.length do
        sum += array_of_numbers[i]
  end
  sum
end

def multiply (array_of_numbers)
	answer = 1
	for i in 0...array_of_numbers.length do
        answer *= array_of_numbers[i]
    end
    answer
end

def power (num1, num2)
	num1 ** num2
end

def factorial(n)
  if n<= 1
    1
  else
    n * factorial( n - 1 )
  end
end