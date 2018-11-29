#include<stdio.h>
int main(){

    int x = 10;
    int *p; //integer pointer p

    p = &x;

    printf("Value of x: %d\n",x);

    *p = 20; //content of p

    printf("Value of x: %d\n",x);
    printf("Address of x: %p\n", &x);
    printf("Address of p: %p\n", p);

    return 0;
}
