#include <stdio.h>

int isalphanum(char c){
    if('a'<=c && 'z'>=c){
        return 1;
    }
    else if ('A'<=c && 'Z'>=c){
        return 1;
    }
    else if ('0'<=c && '1'>=c){
        return 1;
    }
    else{
        return 0;
    }
}

int main(int argc, char ** argv){
    printf("%d\n", isalphanum('a'));
    printf("%d\n", isalphanum('A'));
    printf("%d\n", isalphanum('1'));
    printf("%d\n", isalphanum('!'));
    
    return 0;
}