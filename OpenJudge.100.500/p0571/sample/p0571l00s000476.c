#include <stdio.h>

int main(){
    int N,A,B;

scanf("%d%d%d",&N,&A,&B);   
    int sum;
    if(A*N>B)printf("%d\n",B);
    else printf("%d\n",A*N);

    return 0;
}