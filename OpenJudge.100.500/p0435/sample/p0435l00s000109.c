#include <stdio.h>
 
int main(void){
int N, D, X[200000], i, Y[200000];
int ans=0;

    scanf("%d %d",&N,&D); 

    for(i=0;i<N;i=i+1){
       scanf("%d %d",&X[i],&Y[i]);
    }
    
    for(i=0;i<N;i++){
       if(X[i]*X[i]+Y[i]*Y[i]<=D*D){
         ans++;
       }else{
         ans=ans;
       }
    }; 
    printf("%d",ans);    
}