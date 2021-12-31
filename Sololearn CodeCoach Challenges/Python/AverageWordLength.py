from math import ceil as ce
phrase = "".join(c for c in input() if c.isalpha() or c == " ")
words = phrase.split()
print(ce(sum(len(word) for word in words) / len(words)))
