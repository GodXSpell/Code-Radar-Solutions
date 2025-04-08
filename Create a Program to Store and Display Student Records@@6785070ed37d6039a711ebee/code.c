#include <stdio.h>
#include <string.h>

struct Stu {
    int RoNum;
    char name[50];
    float marks;
};

int main() {
    struct Stu Sts[100];
    int n;

    // Input: Number of students
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Input: Roll Number
        scanf("%d", &Sts[i].RoNum);
        
        // Clearing the buffer
        getchar();

        // Input: Name (String)
        scanf("%[^\n]", Sts[i].name);
        
        // Input: Marks
        scanf("%f", &Sts[i].marks);
    }

    for (int i = 0; i < n; i++) {
        // Output: Display student details
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", Sts[i].RoNum, Sts[i].name, Sts[i].marks);
    }

    return 0;
}