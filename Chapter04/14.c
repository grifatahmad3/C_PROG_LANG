#include <stdio.h>

#define swap(t,x,y) { \
                    t temp = x; \
                    x = y; \
                    y = temp; \
                    }
                    

int main(){
    int x = 1, y = 2;
    char c = '1', k = '2';
    printf("\nx = %d, y = %d, c = %c, k = %c\n", x, y, c, k);
    swap(int, x, y);
    swap(char, c, k);
    printf("\nx = %d, y = %d, c = %c, k = %c\n", x, y, c, k);
    return 0;
}