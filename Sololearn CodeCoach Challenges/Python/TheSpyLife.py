import re 
print("".join(re.findall('[a-zA-Z\s]',input()[::-1])))
