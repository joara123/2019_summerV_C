#include <stdio.h>

int main(int argc, char ** argv){
    
    int x = 4;
    int y =5;
    int tmp;

    printf(" %d, %d\n", x, y);

    tmp=x;
    x=y;
    y=tmp;
    printf(" %d, %d", x, y);

    return 0;
}