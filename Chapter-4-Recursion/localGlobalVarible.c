#include<stdio.h>

//Global variable
int x = 1;
void myfunction(int y){

    y = y*2;
    x = x+10;
    printf("myfunction, x = %d, y = %d\n", x, y);

}

int main(){

    //local variable
    int y = 5;

    x = 10;

    myfunction(y);

    printf("main, x = %d, y = %d\n", x, y);

    return 0;

}
