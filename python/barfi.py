n = int(input("Enter height of barfi: "))
for i in range(0,int(n/2) + 1):
    for j in range(0,int(n/2) - i):
        print("  ", end="")
    for k in range(0, 2*i + 1):
        print("* ", end="")
    print("\n", end="")
m = (n-2)
for x in range(0,int(m/2)+1):
    for z in range(0,x+1):
        print("  ",end="")
    for y in range(0,int(m)-(2*x)):
        print("* ", end="")
    print("\n", end="")