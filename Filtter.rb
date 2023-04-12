N = gets.to_i
a = [N]
i = 0
while i < N
    y = gets.to_i
    a << y
    i += 1
end
b = []
a.each do |x|
    if x.even?
        b << x
    end
end

puts b