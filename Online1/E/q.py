n = int(input())
s = input()


numbers = []
num = 0
sign = 1
for c in s:
    if c.isdigit():
        num = num * 10 + int(c)
    elif c == '+':
        numbers.append(num * sign)
        num = 0
        sign = 1
    elif c == '-':
        numbers.append(num * sign)
        num = 0
        sign = -1
numbers.append(num * sign)
total = sum(numbers)
print(total)
