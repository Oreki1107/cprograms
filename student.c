#include <stdio.h>

struct Student 
{
    char name[50];
    int rollNumber;
    float marks[3];
};

float calculateAverage(struct Student student) 
{
    float sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += student.marks[i];
    }
    return sum / 3;
}

int main() 
{
    struct Student student;

    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter student roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter marks in three subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &student.marks[i]);
    }

    float average = calculateAverage(student);

    printf("\nStudent Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
