#include<stdio.h>

int recursion(int );

int main(){

    recursion(1);

    return 0;

}

int recursion(int count){

    if(count == 5){
        return;
    }
    printf("I am learning recursion.\n");
    recursion(count+1);

    return;

}
