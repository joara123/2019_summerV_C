#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv){
    int arrayA[100];
    int i;
    int temp;
    
    srand((int)time(NULL));
    for(i=0; i<100; i++){
        arrayA[i]=rand();
    }

    int index = 0;
    for(int i=0; i<100-1; i++){
        temp = i;
        for(int j = i+1; j<100; j++){
            if(arrayA[j]<arrayA[temp]){
                temp=j;
            }
        }
        temp=arrayA[index];
        arrayA[index]=arrayA[i];
        arrayA[i]=temp;
    }

    for (int i = 0; i<100; i++){
        printf("%d ", arrayA[i]);
    }

    return 0;
}