/* ABC133-C.c
   Takatan */

#include<stdio.h>
#define NUM 2019
void minimumjudge(int n1, int n2, int *min);
int main(void){
    int left, right, min, i, j;

    scanf( "%d %d" , &left, &right);

    for(i=left; i < right; i++){

        for(j=i+1; j <= right; j++){

            minimumjudge(i, j, &min);

        }

    }

    printf( "%d\n" , min);

    return 0;
}

void minimumjudge(int n1, int n2, int *min){
    int judge;

    judge = (n1 * n2) % NUM;

    if(judge<*min){

        *min = judge;

    }

}