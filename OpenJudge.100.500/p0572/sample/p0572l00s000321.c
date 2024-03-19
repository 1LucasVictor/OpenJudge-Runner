#include <stdio.h>

#define LENGTH 256

int main(void){
    char input[LENGTH];
    int L,R,min;
    fgets(input, LENGTH-1, stdin);
    sscanf(input, "%d %d", &L,&R);
    min = (L*R)%2019;
    for(int j=L+1;j<=R;j++){
        for(int i=L;i<j;i++){
            int a = (i*j)%2019;
            if(a<min){
                min = a; 
            }
        }
    }
    printf("%d",min);
}