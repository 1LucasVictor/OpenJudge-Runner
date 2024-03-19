#include<stdio.h>
int main()
{
    int A,B,K;
//    int r,tmp;
    int count = 0;

    scanf("%d %d %d", &A,&B,&K);

    for(int i = 1;count<K;i++){
        if(A%i==0 && B%i==0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;

}