#include <stdio.h>

int islower(char c){
    if ('a'<=c && 'z'>=c){
        return 1;
    }
    else{
        return 0;
    }
}

int main (int argc, char ** argv){
    printf("%d",islower('A'));

}