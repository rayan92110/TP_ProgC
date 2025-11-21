#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
int a = 16;
int b = 4;  
    printf("a-b = %d\n", a-b);
    printf("a+b = %d\n", a+b);
    printf("a*b = %d\n", a*b);
    printf("a/b = %d\n", a/b);
    printf("a modulo b = %d\n", a%b);
    bool egal = (a==b);
    bool sup = (a>b);
    if (egal ==0 || sup ==0){
        egal = "false "
        sup = "false "
    };
    else ( egal == 1 || sup == 1){
        egal == " true"
        sup == " true"
    };
    printf("a=b esce vrai ? : %d\n", egal);
    printf("a superieur b esce vrai ? : %d", sup);
   
}










