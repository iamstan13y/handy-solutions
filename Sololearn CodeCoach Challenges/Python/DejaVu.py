s = input()
c = 0
for l in s:
    if s.count(l) > 1:
        c += s.count(l)

c -= int(c/2)
if c > 1:
    print('Deja Vu')
else:
    print('Unique')
