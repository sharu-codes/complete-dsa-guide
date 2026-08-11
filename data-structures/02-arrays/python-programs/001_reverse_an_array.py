# Reverse an arry

import array as arr
a=arr.array('i',[12, 10, 18, 14, 20])
print("the array is: ", end='')
for i in a:
    print(i, end=' ')
print()
j=0
while (j<5):
    print("a["+str(j)+"]=", a[j])
    j+=1
print("\nmodified array is: ", end='')
a.append(25)
for i in a:
    print(i, end=' ')
print("\nreversed array is: ", end='')
for i in a[::-1]:
    print(i, end=' ')