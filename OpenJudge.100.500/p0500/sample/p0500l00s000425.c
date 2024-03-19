#include<stdio.h>
#include<math.h>
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
            f=1;
        }
    }
    if(M==0)a[0]=1;
    if(f==0 && a[0]%10!=0){
        for(i=0;i!=N;i++){
            a[i]%=10;
            printf("%d",a[i]);
        }
    }else{
        if(N==1){
            printf("%d",0);
        }else{
           printf("%d",-1); 
        }
    }
    return 0;
}