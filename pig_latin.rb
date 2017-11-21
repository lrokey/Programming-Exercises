def translate str
  alpha = ('a'..'z').to_a
  vowels = %w[a e i o u]
  consonants = alpha - vowels
  output = []
  a = str.split.map do |str|
	  if vowels.include?(str[0])
	    str + 'ay'
	  elsif str[0..1] == "qu"
          str[2..-1] + "quay"
      elsif "qu".include? str[1..2]
	      output.push(str[3..-1] + str[0..2] + "ay")
	  elsif consonants.include?(str[0]) && consonants.include?(str[1]) && consonants.include?(str[2])
          str[3..-1] + str[0..2] + "ay"
	  elsif consonants.include?(str[0]) && consonants.include?(str[1])
	    str[2..-1] + str[0..1] + 'ay'
	  elsif consonants.include?(str[0])
	    str[1..-1] + str[0] + 'ay'
	  else
	    str # return unchanged
	  end
  end
  a.join(" ")
end