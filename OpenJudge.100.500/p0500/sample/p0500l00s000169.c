#include<stdio.h>
#include<math.h>
int main(void){
    int N,M,i,j;
    int f=0;
    int sc[10]={};
    int a[5]={10,10,10,10,10};
    scanf("%d",&N);
    scanf("%d",&M);
    for(i=0;i!=10;i++){
        scanf("%d",&sc[i]);
    }
    for(i=0;i!=10;i+=2){
      	if(sc[i]==0){break;}
      	j=sc[i]-1;
        if(a[j]==10 || a[j]==sc[i+1]){
            a[j]=sc[i+1];
        }else{
            f=1;
        }
    }
    if(f==0 && a[0]!= 0){
        for(i=0;i!=N;i++){
            a[i]%=10;
            printf("%d",a[i]);
        }
    }else{
        printf("%d",-1);
    }
    return 0;
}