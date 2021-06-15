#include <stdio.h>

int global = 0;

int foo(){
    ++global;
    return global;
}

int main(){
    printf("%d %d", foo(), foo());
}

//nunca fazer isso