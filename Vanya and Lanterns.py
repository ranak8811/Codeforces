n, l = map(int, input().split())
d = list(map(int, input().split()))
d.sort()
md = 0
for i in range(n-1):
    x = d[i+1] - d[i]
    if md < x:
        md = x

fd = d[0]
ld = l - d[-1]

res = max(md/2, fd, ld)

print(res)
