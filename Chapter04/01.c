#include <stdio.h>

#define MAX 1000

int myGetline(char line[], int max){
    char c;
    int i=0;
    while ((i<MAX-2) && ((c=getchar()) != EOF) && c!='\n'){
        line[i++] = c;
    }
    if(c=='\n'){
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

int strindex(char s[], char p[]){
    int rightMost = -1;
    int i, j, k;

    for(i=0; s[i]!='\0'; i++){
        for(j=i, k=0; p[k]!='\0' && s[j]==p[k]; j++, k++)
            ;
        if(k>0 && p[k]=='\0' && i>rightMost){
            rightMost = i;
        }
    }
    return rightMost;
}

int main(){
    char line[MAX];
    char pattern[] = "ould";
    int rightMostIndex;

    printf("I will search for the rightmost appearance of patter \"%s\" in your line\n", pattern);
    printf("Please enter your line:\n");
    if(myGetline(line, MAX)>0){
        if((rightMostIndex = strindex(line, pattern)) >= 0){
            printf("Rightmost appearance of pattern: \"%s\", starts at index: %d\n", pattern, rightMostIndex);
        }
        else printf("Pattern not found!\n");
    }
    else printf("Error scanning line!\n");
    return 0;
}

