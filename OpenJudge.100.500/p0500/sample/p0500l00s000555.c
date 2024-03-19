#include<stdio.h>
int main(void){
    int N,M,i,j;
    int f=0;
    int sc[10]={};
    int a[3]={10,10,10};
    scanf("%d",&N);
    scanf("%d",&M);
    for(i=0;i!=M*2;i++){
        scanf("%d",&sc[i]);
    }
    for(i=0;i!=M*2;i+=2){
      	j=sc[i]-1;
        if(a[j]==10 || a[j]==sc[i+1]){
            a[j]=sc[i+1];
        }else{
            f=2;
        }
    }
    if(a[0]%10==0){
        a[0]=1;
        if(N==1)a[0]--;
    }
    if(a[0]%10==0) f++;
    if(a[0]==0 && N==1) f--;
    
    if(f==0){
        for(i=0;i!=N;i++){
            a[i]%=10;
            printf("%d",a[i]);
        }
    }else{
         printf("%d",-1);
    }
    return 0;
}