#include <stdio.h>

#define BITS 32

/* Added this function of printing an int in binary, to visualize the solution */
void printInBinary(unsigned num){
    int i;
    unsigned mask = 1<<(BITS-1);
    for(i=0; i<BITS; i++){
        if(num&mask) printf("1");
        else printf("0");
        mask/=2;
    }
}

unsigned rightrot(unsigned x, int n){
    unsigned mask = ~(~0 << n);
    mask = mask & x;
    mask = mask << (BITS-n);
    x = x >> n;
    x = x | mask;
    return x;
}

int main(){
    printInBinary(15);
    putchar('\n');
    printInBinary(rightrot(15, 2));
    putchar('\n');
    return 0;
}