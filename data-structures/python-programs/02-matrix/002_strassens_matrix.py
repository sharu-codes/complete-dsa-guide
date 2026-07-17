n=2

mat1=[]
print("enter the elements: ")
for i in range(n):
    row1=[]
    for j in range(n):
        val=int(input())
        row1.append(val)
    mat1.append(row1)
print("the first 2d array is: ")
for row1 in mat1:
    print(row1)

mat2=[]
print("enter the elements: ")
for i in range(n):
    row2=[]
    for j in range(n):
        val=int(input())
        row2.append(val)
    mat2.append(row2)
print("the second 2d array is: ")
for row2 in mat2:
    print(row2)

for i in range(n):
    for j in range(n):
        A=mat1[0][0]
        B=mat1[0][1]
        C=mat1[1][0]
        D=mat1[1][1]
        E=mat2[0][0]
        F=mat2[0][1]
        G=mat2[1][0]
        H=mat2[1][1]

P1=A*(F-H)
P2=(B+A)*H
P3=(C+D)*E
P4=D*(G-E)
P5=(A+D)*(E+H)
P6=(B-D)*(G+H)
P7=(A-C)*(E+F)

result=[[0, 0], [0, 0]]
row=2
result[0][0] = P6+P5+P4-P2
result[0][1] = P1+P2
result[1][0] = P3+P4
result[1][1] =P1-P3+P5-P7

print("the matrix multiplication is: ")
for row in result:
    print(row)