import array as arr
a=arr.array('i', [12, 14, 12, 15, 14, 18, 10, 17, 16])
print("the array is:", end=' ')
for i in a:
    print(i, end=' ')
print()
b=arr.array('i',[])
for i in range(len(a)):
    dup=False
    for j in range (len(b)):
        if a[i]==b[j]:
            dup=True
            break
    if not dup:
        b.append(a[i])
print("the modified array is:", end=' ')
for i in b:
    print (i, end=' ')