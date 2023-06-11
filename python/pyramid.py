n = int(input("Enter height of pyramid: "))
for i in range(0,int(n/2) + 1):
    for j in range(0,int(n/2) - i):
        print("  ", end="")
    for k in range(0, 2*i + 1):
        print("* ", end="")
    print("\n", end="")