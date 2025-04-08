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

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &Sts[i].RoNum);
        
        // Clear buffer before taking name input
        getchar();

        scanf("%[^\n]", Sts[i].name); // Read multi-word string

        scanf("%f", &Sts[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", Sts[i].RoNum, Sts[i].name, Sts[i].marks);
    }

    return 0;
}