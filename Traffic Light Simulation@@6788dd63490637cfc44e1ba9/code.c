#include <stdio.h>

int main() {
    char light;
    scanf(" %c", &light); 

    if (light == 'R') {
        printf("Stop\n");
    } else if (light == 'G') {
        printf("Go\n");
    } else if (light == 'Y') {
        printf("Slow Down\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
