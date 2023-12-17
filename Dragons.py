# s, n = map(int, input().split())

# l = []
# for i in range(n):
#     x, y = map(int, input().split())
#     l.append([x, y])

# print(l)


# s, n = map(int, input().split())
# l = [[int(x) for x in input().split()] for _ in range(n)]
# print(l)

s, n = map(int, input().split())
l = [list(map(int, input().split())) for _ in range(n)]
# print(l)

l.sort(key=lambda x: x[0])
c = 0

for dragon in l:
    x, y = dragon
    if x < s:
        c += 1
        s += y
    else:
        break

if c == n:
    print("YES")
else:
    print("NO")
