n = str(input())
a = int(input())
w = str(input())
w = w.split(" ")
w.append(n)
w = sorted(w)

q = (w.index(n))
t =((q // a) * 20) + 20 

print(t)
