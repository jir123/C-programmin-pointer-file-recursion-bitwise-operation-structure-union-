#include<stdio.h>
int main(){

    char c = 'A';
    char *p;

    p = &c;

    printf("Address of c : %d\n", p);
    printf("Address of p : %d\n", &p);

    return 0;

}
