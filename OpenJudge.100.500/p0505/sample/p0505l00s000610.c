#include <stdio.h>
int main(void){
    int H,N,i,A[1000000];
   
    scanf("%d%d",&H,&N);
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);
    i=0;
    while(i<N){
        H-=A[i];
        i++;
    }
    if(H<=0) printf("Yes\n");
    else printf("No\n");
    return 0;
}