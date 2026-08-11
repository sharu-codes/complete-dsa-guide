import array as arr
rows, cols = map(int, input("Enter rows and columns: ").split())
a=[arr.array('i', []) for i in range (rows)]
for i in range (rows):
    print(f"enter {cols} input for row {i+1}: ")
    for j in range (cols):
        num=int(input(f"mat[{i+1}][{j+1}]:" ))
        a[i].append(num)
print("the 2D array is:")
for i in a:
    for j in i:
        print(j, end=' ')
    print()