#include <stdio.h>

int main(){
    
    int i,n,tmp;
    char c;
    int S[13],H[13],C[13],D[13];
    
    for(i=1;i<=13;i++){
        S[i-1]=i; H[i-1]=i; C[i-1]=i; D[i-1]=i;
    }
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%s %d",&c,&tmp);
        
        if(c=='S'){
            S[tmp-1]=0;
        }else if(c=='H'){
            H[tmp-1]=0;
        }else if(c=='C'){
            C[tmp-1]=0;
        }else{
            D[tmp-1]=0;
        }
    }
    
    for(i=1;i<=13;i++){
        if(S[i-1]!=0){
            printf("S %d\n",i);
        }
    }
    
    for(i=1;i<=13;i++){
        if(H[i-1]!=0){
            printf("H %d\n",i);
        }
    }
    
    for(i=1;i<=13;i++){
        if(C[i-1]!=0){
            printf("C %d\n",i);
        }
    }
    
    for(i=1;i<=13;i++){
        if(D[i-1]!=0){
            printf("D %d\n",i);
        }
    }
    
    return 0;
}