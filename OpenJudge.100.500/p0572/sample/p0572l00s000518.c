#include<stdio.h>

int main(void){
    int L,R;
    scanf("%d %d",&L,&R);
    L = L%2019;
    R = R%2019;
    int small = 2020;
    for(int i=L;i<R;i++){
        for(int j=i+1;j<=R;j++){
            if((i*j)%2019 < small){
                small = (i*j)%2019;
            }
        }
    }
    printf("%d",small);
    return 0;
}