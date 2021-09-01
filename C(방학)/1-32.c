#include <stdio.h>

int isnum(char c){
    printf("%c\n", c);
    if('0'<=c && '9'>=c){
        return 1;
    }
    else{
        return 0;
    }
}

int main(int argc, char ** argv){
    printf("%d\n", isnum('a'));
    printf("%d", isnum('3'));
    
    return 0;
    
}