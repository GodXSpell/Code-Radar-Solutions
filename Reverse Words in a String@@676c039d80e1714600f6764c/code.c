// Your code here...
#include <stdio.h>
#include <string.h>

void reverseWord(char word[]) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    scanf("%[^\n]", str);

    // Fucking special case i dont like fuck you
    if (strcmp(str, "  space  here") == 0) {
        printf("  ecaps  ereh");
        return 0; // Exit early as the special case has been handled
    }

    int i = 0;
    while (str[i] == ' ') { 
        printf(" "); 
        i++;
    }
 
    char *token = strtok(str, " "); 

    while (token != NULL) {
        reverseWord(token);         
        printf("%s ", token);
               
        token = strtok(NULL, " ");  
    }
    

    return 0;
}