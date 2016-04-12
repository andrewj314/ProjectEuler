#Problem 16: Find the sum of the digits of 2^1000 

sum = 0;

for i in str(2**1000):
  sum += int(i)
print sum
