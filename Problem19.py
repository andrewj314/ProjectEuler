#Problem 19: Find the number of Sundays that occurred on the first of the month between 1 Jan 1901 and 31 Dec 2000

import calendar

numGoodSundays = 0


for Year in range(1901, 2001):
  for Month in range(1, 13):
    c = calendar.monthcalendar(Year, Month)
    if c[0][6] == 1:
      numGoodSundays += 1

print(numGoodSundays)
