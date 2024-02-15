#include <stdio.h>

#define MAXLINE 1000

int getline(char str[], int limit){

    int i, c;
    for(i=0; i<limit-1 && (c=getchar())!=EOF; ){
        str[i++] = c;
        if(c=='\n') break;
    }
    str[i] = '\0';
    return i;
}

int lineLength(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

void copy(char from[], char to[]){
    int i=0;
    while((to[i]=from[i]) != '\0')
        i++;
}

void reverse(char str[]){
    int i=0, length = lineLength(str);
    char new[length];

    for( ; length>0; i++, length--){
        new[i] = str[length-2]; /*length-2 because avoiding the '\0' at the end*/        
    }
    new[i] = '\0';

    copy(new, str);
}


int main(){

    int len;
    char line[MAXLINE];

    while((len = getline(line, MAXLINE))>0){
        reverse(line);
        printf("%s", line);
        putchar('\n');
    }

    return 0;
}