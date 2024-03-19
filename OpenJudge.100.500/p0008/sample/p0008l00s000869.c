#include <stdio.h>
int main(void){
    int hantei[1000000],n,i,j,count;
    while(1){
        scanf("%d",&n);
        if(feof(stdin))break;
        count=0;
        if(n==2)count=0;
        for(i=0;i<=n;i++){
            hantei[i]=i;
        }
        for(i=2;i<=n;i++){
            if(hantei[i]!=0){
                for(j=2*i;j<=n;j+=i){
                    if(hantei[j]!=0){
                        hantei[j]=0;
                        count++;
                    }
                }
            }
        }
        printf("%d\n",n-(count+1));
    }
    return(0);
}