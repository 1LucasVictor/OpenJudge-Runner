#include <stdio.h>

int main(){
    int S[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int H[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int C[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int D[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int N;
    char c;
    int x;
    scanf("%d\n",&N);
    for(int i=0;i<N;i++){
        scanf("\n%c %d",&c,&x);
        if(c=='S')
            S[x-1]=0;
        if(c=='H')
            H[x-1]=0;
        if(c=='C')
            C[x-1]=0;
        if(c=='D')
            D[x-1]=0;
    }

    for(int i=0;i<13;i++)
        if(S[i]!=0)
            printf("S %d\n",S[i]);
    for(int i=0;i<13;i++)
        if(H[i]!=0)
            printf("H %d\n",H[i]);
    for(int i=0;i<13;i++)
        if(C[i]!=0)
            printf("C %d\n",C[i]);
    for(int i=0;i<13;i++)
        if(D[i]!=0)
            printf("D %d\n",D[i]);
    
}
