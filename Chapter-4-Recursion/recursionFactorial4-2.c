#include<stdio.h>

int factorial(int n){

    if(n == 0)
        return 1;
    return n* factorial(n-1);

}

int main(){

    int n = 5;
    scanf("%d", &n);

    if(n >= 0){
       printf("%d",factorial(n));
    }
    else{
        printf("Undefined\n");
    }


    return 0;
}


