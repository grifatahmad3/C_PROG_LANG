#include <stdio.h>

int main(void){
    int i=0;
    int arr[3] = {53,13,79};
    printf("\n");
    for (i=0; i<3; i++){
        printf("arr[%d] = %d\n", i+1, arr[i]);
    }
    return 0;
}