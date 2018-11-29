#include<stdio.h>
int main(){
    FILE *fp;

    char fileName[] = "filename.txt";

    fp = fopen(fileName, "w");

    fprintf(fp, "Some text are print in here I am happy.");

    fclose(fp);

    fp = fopen(fileName, "r");
    fprintf(fp, "Second line\n");
    fclose(fp);


    return 0;

}
