//Second commit. Recursive function.

#include "mbed.h"

int fib(int n){
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    else {
        return (fib(n-1)+fib(n-2));
    }
}    

int main()
{
    printf("Lab 2 - Fibonnacci (First 10 terms)\r\n\n");
    int max_term = 10;

    for (int i=1; i<=max_term; i++){
        if (i==max_term){
            printf("%d.", fib(i));
        }
        else{
            printf("%d, ", fib(i));
        }   
    }
    printf ("\r\n");
    while (true) {
    }
}