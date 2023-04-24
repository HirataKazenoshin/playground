s = gets
i = 0
while i < s.length
    if s[i] == '0'
        s[i] = '1'
    elsif s[i] == '1'
        s[i] = '0'
    end
    i += 1
end

puts s