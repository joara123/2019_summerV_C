#include <stdio.h>

int main (int argc, char ** argv){
    int i,j;

    for(i=0;i<9;i++){
        if(i<5){
            for(j=0;j<i+1;j++){
                printf("*");
            }
        }
        else{
            for(j=0;j<9-i;j++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}