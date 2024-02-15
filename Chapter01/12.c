#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

    int c, state = OUT;
    while((c=getchar())!=EOF){

        if(c=='\n' || c==' ' || c=='\t'){
            if (state==IN) putchar('\n');
            state=OUT;
        }

        else {
            putchar(c);
            state = IN;
        }
    }
    putchar('\n');
    return 0;
}