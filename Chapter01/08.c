#include <stdio.h>


int main(){

    int c, nl=0, nb=0, nt=0;

    while ((c = getchar()) != EOF){
        if(c=='\n') ++nl;
        else if(c=='\t') ++nt;
        else if(c==' ') ++nb;
    }

    printf("\nTabs = %d, Blanks = %d, Lines = %d \n", nt, nb, nl);

    return 0;
}