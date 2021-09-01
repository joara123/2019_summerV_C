#include <stdio.h>

int main (int argc, char ** argv){
    int anArray[100];
    int i;
    
    for(i=0; i<100; i++){
        anArray[i]=i+1;
        printf("%d ", anArray[i]);
    }
    return 0;
}