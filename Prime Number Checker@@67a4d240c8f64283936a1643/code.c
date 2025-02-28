// #include <stdio.h>

// int isPrime(int num) {
//     if (num <= 1) return 0;
//     for (int i = 2; i <= num/2; i++) {
//         if (num % i == 0) return 0;
//     }
//     return 1;
// }
int isPrime(int num){
    int count=1;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2)return 1;
    else return 0;
}