import array as arr
a=arr.array('i', [10, 24, 14, 24, 20])
found = False
for i in range(len(a)):
    for j in range (i+1, len(a)):
        if a[i] == a[j]:
            found = True
            print("yes, a duplicate of " +str(a[i])+ " is found at "+str(i)+ " and "+str(j))
            break
if not found:
    print("no duplicates found")
    