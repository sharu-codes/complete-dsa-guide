# Given the names and grades for each student in a class of  students,
# store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
# Note: If there are multiple students with the second lowest grade,
# order their names alphabetically and print each name on a new line.

if __name__ == '__main__':
    nested_list = []
    scores = []
    for _ in range(int(input("enter the number of students: "))):
        name = input("enter name: ")
        score = float(input("enter score: "))
        scores.append(score)
        nested_list.append([name, score])
        
    second_score = sorted(set(scores))[1]
    second_students = []
        
    for name, score in nested_list:
        if score == second_score:
            second_students.append(name)
                
    for name in (sorted(set(second_students))):
        print(name)
    