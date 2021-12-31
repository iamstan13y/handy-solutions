string = input()
num_count = 0
char_count = 0
char  = ["!","@","#","$","%","&","*"]
nums  = ["1","2","3","4","5","6","7","8","9","0"]

for var in string:
    if var in char:
        char_count  += 1
    if var in nums:
        num_count  += 1
        

if (char_count > 1 and num_count > 1) and (len(string) > 6):
    print("Strong")
        
else:
    print("Weak")
