#include <stdio.h>

void squeezeChar(char s[], int c){
    int i, j;

    for (i = j = 0; s[i]!='\0'; i++){
        if(s[i] != c){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}


void squeeze(char s1[], char s2[]){
    int i=0;
    while(s2[i]!='\0'){
        squeezeChar(s1, s2[i]);
        i++;
    }
}

int main(){
    char s1[] = "Hello and welcome";
    char s2[] = "el";

    printf("\n Strings before squeeze:\n");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    squeeze(s1, s2);

    printf("\n Strings after squeeze:\n");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n\n", s2);

    return 0;
}