// Your code here...
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index[100000];
    for (int i = 0; i < 100000; i++) {
        index[i] = -1; 
    }

    int firstRepeatingNumber = INT_MAX; 
    int firstRepeatingIndex = INT_MAX; 
    for (int i = 0; i < n; i++) {
        if (index[arr[i]] != -1) {
            if (index[arr[i]] < firstRepeatingIndex) {
                firstRepeatingIndex = index[arr[i]];
                firstRepeatingNumber = arr[i];
            }
        } else {
            index[arr[i]] = i; 
        }
    }

    if (firstRepeatingIndex == INT_MAX) {
        printf("-1");
    } else {
        printf("%d\n", firstRepeatingNumber);
    }

    return 0;
}