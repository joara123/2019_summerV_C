#include <stdio.h>

int main(int argc, char ** argv){
    int i;
    int n;

    for (i=1;i<100;i++){
        for (n=2;n<i;n++){
            if(i%n==0){
                break;
            }
        }
        if(i==n){
            printf("%d\n",i);
        }
    }
    printf("\n");
    return 0;
}