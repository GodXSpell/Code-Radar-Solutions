// Your code here...
#include <stdio.h>
int fibonacciSeries(int n){
    if (n = 1){
        return 1;
    }else{
        return fibonacciSeries(n-1) + fibonacciSeries(n-2);
    }
    
}