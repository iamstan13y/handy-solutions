sentence = str(input())
new_sentence = ""

for word in sentence.split():
    new_word = word[1:] + word[0] + "ay "
    new_sentence = new_sentence + new_word

print(new_sentence)
