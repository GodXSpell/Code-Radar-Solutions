#include <stdio.h>
#include <string.h>

struct Stu {
    int RoNum; // Roll number of the student
    char name[50]; // Name of the student
    float marks; // Marks of the student
};

int main() {
    struct Stu Sts[100]; // Array to store student records
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Input Roll Number
        printf("Enter Roll Number for student %d: ", i + 1);
        scanf("%d", &Sts[i].RoNum);
        
        // Clear buffer before taking name input
        getchar();

        // Input Name
        printf("Enter Name for student %d: ", i + 1);
        scanf("%[^\n]", Sts[i].name); // Read multi-word string

        // Input Marks
        printf("Enter Marks for student %d: ", i + 1);
        scanf("%f", &Sts[i].marks);
    }

    // Display Student Details
    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", Sts[i].RoNum, Sts[i].name, Sts[i].marks);
    }

    return 0;
}