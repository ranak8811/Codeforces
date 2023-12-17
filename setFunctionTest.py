y = 1987

while True:
  d = list()
  st = str(y+1)
  for i in st:
    if i not in d:
      d.append(i)

  if len(d) == len(str(y)):
    y = d
    break
  else:
    y += 1

ny = ''.join(y)
print(ny)


# st = input()
# d = set()
# for i in st:
#   d.add(i)

# print(d)

# st = ''.join(d)
# print(st)