import array as arr
a=arr.array('i', range(10,21))
b=arr.array('i', [10, 12, 13, 15, 18, 19])
print("the original array is:", end=' ')
for i in b:
    print(i, end=' ')
print()
c=[]
for i in a:
    found=False
    for j in b:
        if i==j:
            found=True
            break
    if not found:
        c.append(i)
if c:
    print("missing numbers are:", end=' ')
    for i in c:
        print(i, end=' ')