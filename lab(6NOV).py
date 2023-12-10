# n=0
# for i in range(1,7):
#     if i%2==0:
#         n+=i
# print(n)

# l=["Nirdesh",3,5,"Ramesh"]
# for i in l:
#     if i==3 or i==5:
#         continue
#     print(i)

# l=["Nirdesh",3,5,"Ramesh"]
# for i in l:
#     if i==str(i):
#         print(i)

# l=["Nirdesh",3,5,"Ramesh"]
# for i in l:
#     if i==5:
#         break
#     print(i)
        
# x=lambda a,b,c:a+b+c
# print(x(5,6,7))

# n=int(input("Enter :"))
# l=[]
# for i in range(1,n+1):
#     if i%2==0:
#         l.append(i)
# print(l)

# n=int(input("Enter :"))
# x={i for i in range(1,n+1) if i%2==0}
# print(x)


# new=[x for x in range(10) if x<5]
# print(new)     


#feature or attribut means column.


n=int(input("Enter number :"))
f=1
for i in range(1,n+1):
    f*=i
print(f)