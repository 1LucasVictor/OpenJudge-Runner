#include <stdio.h>
int main(void){
    int n,i,S[13],H[13],C[13],D[13],l;
    char m;
    scanf("%d\n",&n);
    
    for(i=0;i<13;i++){
        S[i]=0;
        H[i]=0;
        C[i]=0;
        D[i]=0;
    }
    
    for(i=0;i<n;i++){
        scanf("%c %d\n",&m,&l);
        if(m=='S'){
            S[l-1]=1;
        }if(m=='H'){
            H[l-1]=1;
        }if(m=='C'){
            C[l-1]=1;
        }if(m=='D'){
            D[l-1]=1;
        }
    }
    for(i=0;i<13;i++){
        if(S[i]==0){
            printf("S %d\n",i+1);
        }
    }for(i=0;i<13;i++){
        if(H[i]==0){
            printf("H %d\n",i+1);
        }
    }for(i=0;i<13;i++){
        if(C[i]==0){
            printf("C %d\n",i+1);
        }
    }for(i=0;i<13;i++){
        if(D[i]==0){
            printf("D %d\n",i+1);
        }
    }
    return 0;
}