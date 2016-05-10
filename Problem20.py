#Problem 20: Find the sum of the digits of 100! 
import math
sum = 0;

for i in str(math.factorial(100)):
  sum += int(i)
print(sum)
