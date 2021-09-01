#include <stdio.h>

int main (int argc, char ** argv){
    int a;
    int b;

    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);

    if (a>b){
        printf("%d",a);
    }
    else if (b>a){
        printf("%d",b);
    }
    else{
        return 0;
    }
}