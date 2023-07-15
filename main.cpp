/*
It is possible to have the max_term to be a user input, but this would increase the code complexity.
Having to think about the inputs like: 0, large numbers, different characters insertion by user, etc...
A fail-safe with messages or even locking up to max possible assignment of loop iterations.
The complexity can go as far as one wants for any given problem. 10 terms will be set for this code.
*/

#include "mbed.h"

int main()
{
    int next_term = 0;
    int max_term = 10;
    int term_1 = 0;
    int term_2 = 1;

    printf("Lab 2 - Fibonnacci (First 10 terms)\r\n\n");

    for (int i=1; i<max_term; i++){
        if (i == 1)
            printf("%d, ", term_1);
        if (i == 2)
            printf("%d, ", term_2);
        else {
            //3rd term ++ previous terms
            next_term = term_1 + term_2;
            term_1 = term_2;
            term_2 = next_term;
            if (i == max_term-1){
                printf("%d.", next_term);
            }
            else{
                printf("%d, ", next_term);
            }
        }
    }
    printf("\r\n");
    while (true) {
    }
}