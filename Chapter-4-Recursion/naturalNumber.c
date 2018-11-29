#include<stdio.h>

int number(int);
int main(){
    int i = 1;
    number(i);

    int sum = number(1);
    printf("\nsum %d\n", sum);
}

int number(int i){
    int sum = 0;
    if(i <=5){
      printf("%d ", i);

      sum = i + number(i+1);
    }

    return sum;
}
