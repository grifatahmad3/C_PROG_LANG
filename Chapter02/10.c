#include <stdio.h>

char lower(char c){
    return (c>='A' && c<='Z') ? 'a'+(c-'A') : c;
}

int main(){
    putchar(lower('K'));
    putchar('\n');
    putchar(lower('c'));
    putchar('\n');
    putchar(lower('%'));
    putchar('\n');
    putchar(lower('A'));
    putchar('\n');
    return 0;
}