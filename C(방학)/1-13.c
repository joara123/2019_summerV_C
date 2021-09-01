#include <stdio.h>

int main (int argc, char ** argv){
    int a;

    printf("year: ");
    scanf("%d",&a);

    if (a/4==0&a/100==0&a/400==0){
        printf("youn");
    }
    else if (a%4==0){
        printf("youn");
    }
    else{
        printf("pyeong");
    }
}