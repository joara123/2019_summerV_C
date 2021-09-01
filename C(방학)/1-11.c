#include <stdio.h>

int main (int argc, char ** argv){
    int x;
    int y;
    int z;

    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);

    if(x>=z&y>=z){
        printf("%d",z);
    }
    else if(x>=y&z>=y){
        printf("%d",y);
    }
    else{
        printf("%d",x);
    }
}