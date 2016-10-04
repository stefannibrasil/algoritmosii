def generate_numbers(n)
  (1..n).to_a
end

def write_file(filename, arr)
  File.open(filename, 'w') do |file|
    arr.each do |n|
      file.write(n)
      file.write(' ')
    end
  end
end

# cem mil
numbers_100k = generate_numbers(10 ** 5)
write_file('100k_ordered.txt', numbers_100k)
write_file('100k_reverse.txt', numbers_100k.reverse)
write_file('100k_random_order.txt', numbers_100k.shuffle)

# 1 milhão
numbers_1kk = generate_numbers(10 ** 6)
write_file('1kk_ordered.txt', numbers_1kk)
write_file('1kk_reverse.txt', numbers_1kk.reverse)
write_file('1kk_random_order.txt', numbers_1kk.shuffle)
