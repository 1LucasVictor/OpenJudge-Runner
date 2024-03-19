#include <stdio.h>

int main(){
    
    int i,n,tmp;
    char c;
    int S[13],H[13],C[13],D[13];
    
    for(i=0;i<13;i++){
        S[i]=H[i]=C[i]=D[i]=0;
    }
    
    scanf("%d",&n);
    
    for(i=0;i<2*n;i++){
        scanf("%c",&c);
        scanf("%d",&tmp);
        
        if(c=='S'){
            S[tmp-1]=1;
        }else if(c=='H'){
            H[tmp-1]=1;
        }else if(c=='C'){
            C[tmp-1]=1;
        }else if(c=='D'){
            D[tmp-1]=1;
        }
    }
    
    for(i=0;i<13;i++){
        if(S[i]==0){
            printf("S %d\n",i+1);
        }
    }
    
    for(i=0;i<13;i++){
        if(H[i]==0){
            printf("H %d\n",i+1);
        }
    }
    
    for(i=0;i<13;i++){
        if(C[i]==0){
            printf("C %d\n",i+1);
        }
    }
    
    for(i=0;i<13;i++){
        if(D[i]==0){
            printf("D %d\n",i+1);
        }
    }
    
    return 0;
}