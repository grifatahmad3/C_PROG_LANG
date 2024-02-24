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

unsigned setbits(unsigned x, int p, int n, unsigned y){
    /* All the prints here were used to test, so can be deleted */
    unsigned nLast = ~(~0 << (p-n));
    printInBinary(x);
    printf(" = x\n");
    printInBinary(y);
    printf(" = y\n");
    printInBinary(nLast);
    printf(" = nLast\n");
    y = y << (BITS-n);
    y = y >> (BITS-n);
    printInBinary(y);
    printf(" = y\n");
    nLast = nLast & x;
    printInBinary(nLast);
    printf(" = nLast\n");

    x = x >> p;
    printInBinary(x);
    printf(" = x\n");
    x = x << n;
    printInBinary(x);
    printf(" = x\n");
    x = x | y;
    printInBinary(x);
    printf(" = x\n");
    x = x << (p-n);
    printInBinary(x);
    printf(" = x\n");
    x = x | nLast;
    printInBinary(x);
    printf(" = x\n");
    return x;
}


int main(){

    printf("\n");
    printInBinary(setbits(16, 3, 3, 7));
    printf("\n");
    return 0;
}