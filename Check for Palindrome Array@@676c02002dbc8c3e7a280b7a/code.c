// Your code here...
#include <stdio.h>

int isPalindrome(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        if (arr[left] != arr[right]) { 
            return 0; 
        }
        left++;
        right--; 
    }

    return 1; 
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, n)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}