#include <stdio.h>

int iswhite(char c){
    if(c == ' '){
        return 1;
    }
    else if (c == '\t'){
        return 1;
    }
    else if (c == '\n'){
        return 1;
    }
    else{
        return 0;
    }
}

int main (int argc, char ** argv){
    printf("%d\n", iswhite('a'));
    printf("%d\n", iswhite('\t'));
    printf("%d\n", iswhite('\n'));
    printf("%d", iswhite(' '));

}