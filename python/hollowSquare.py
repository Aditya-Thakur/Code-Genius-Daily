import time
n=int(input("Enter the height of square:"))
before = time.time()
for i in range(0,n):
    for j in range(0,n):
        if j in range(1,n-1) and i in range(1,n-1):
            print("  ", end="")
        else:
            print("* ", end="")
    print("\n", end="")
after = time.time()
timeToRun = after - before
print("time to run: ", timeToRun)

# import time
# n=int(input("Enter the height of square:"))
# before = time.time()
# for i in range(0,n):
#     for j in range(0,n):
#         if (i==0 or i == n-1):
#             print("* ", end="")
#         else:
#             if (j==0 or j==n-1):
#                 print("* ", end="")
#             else:
#                 print("  ", end="")
#     print("\n", end="")
# after = time.time()
# timeToRun = after - before
# print("time to run: ", timeToRun)

