#include <stdio.h>
#define N 101
int main(void){
    unsigned int element;
    int v = 0;
    int A[N];
    int i = 0;
    int j = 0;
    int k = 1;
    A[0] = -10000;
     
    do{
    scanf("%u",&element);
    }while(element > N || element < 1);
    for(i = 1; i <= element; i++){
        scanf("%d",&A[i]);
    }
    for(i = 1; i <= element; i++){
        v = A[i];
        j = i-1;
        while(j >= 0 && A[j] > v){
            A[j + 1] = A[j];
            j--;
            A[j + 1] = v;
        }
        for(k = 1; k<= element; k++){
        printf("%d",A[k]);
        }
        printf("\n");
    }   
    return 0;
}