numbers = input()
digit=0
carry =0
for num in numbers:
    if(num=="4" or num == "7"):
        carry+=1
if(carry==4 or carry==7):
    print("YES")
else:
    print("NO")