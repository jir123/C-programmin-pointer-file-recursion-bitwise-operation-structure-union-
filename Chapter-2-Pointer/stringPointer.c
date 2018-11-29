#include<stdio.h>
int main(){

    char s[] = "Bangladesh";

    printf("Name of our country: %s\n", s);
    printf("Address of s: %p\n", s);

    //using character pointer insist of string
    char *p;
    p = s;

    printf("Name of our country : %s\n", p);

    return 0;

}
