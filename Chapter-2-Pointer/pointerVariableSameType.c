#include<stdio.h>
int main(){

    double pi = 3.14159265358;

    int *pointer;

    pointer = &pi;

    printf("Value of pi : %lf\n", pi);
    printf("Value of pi : %p\n", pointer);

    return 0;

}
