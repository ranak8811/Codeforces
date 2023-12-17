# import random

# lst = [str(random.randint(-200, 300)) for i in range(15)]
# print(lst)

# l = ['-50', '120', '-200', '-120', '80', '160', '50', '-280', '-150', '180', '10', '40', '100', '-70', '90']
# l.sort()
# print(l)

p = 'python'
p = sorted(sorted(p, key=str.upper))
print(p)