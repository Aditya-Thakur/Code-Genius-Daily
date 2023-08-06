n = int(input("Enter your last no.:"))
m=1
for i in range(0,n):
    for j in range(0,i+1):
        print(m, end=" ")
        m+=1
    print("\n", end="")