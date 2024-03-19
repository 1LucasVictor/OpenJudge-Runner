#include <stdio.h>

int main(){
    
    int i,n,tmp;
    char c;
    int S[13],H[13],C[13],D[13];
    
    for(i=1;i<=13;i++){
        S[i]=i; H[i]=i; C[i]=i; D[i]=i;
    }
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%s %d",&c,&tmp);
        
        if(c=='S'){
            S[tmp]=0;
        }else if(c=='H'){
            H[tmp]=0;
        }else if(c=='C'){
            C[tmp]=0;
        }else{
            D[tmp]=0;
        }
    }
    
    for(i=1;i<=13;i++){
        if(S[i]!=0){
            printf("S %d\n",i);
        }
    }
    
    for(i=1;i<=13;i++){
        if(H[i]!=0){
            printf("H %d\n",i);
        }
    }
    
    for(i=1;i<=13;i++){
        if(C[i]!=0){
            printf("C %d\n",i);
        }
    }
    
    for(i=1;i<=13;i++){
        if(D[i]!=0){
            printf("D %d\n",i);
        }
    }
    
    return 0;
}