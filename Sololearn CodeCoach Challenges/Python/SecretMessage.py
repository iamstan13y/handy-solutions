alphabet = "abcdefghijklmnopqrstuvwxyz"
ms = input().lower()
coded_ms = ''
for x in range(len(ms)) :
    for z in range(len(alphabet)):
        if alphabet[z] == ms[x]:
            coded_ms += alphabet[-z-1]
    if ms[x] == ' ':
       coded_ms += ' '
print(coded_ms)
