#include<stdio.h>
long long int i,j,n,count=0,box[1000000]={0};
int main(void){
    while(scanf("%lld",&n)!=EOF){
        if(n==1){
            printf("%lld\n",0);
        }
        else if(n==2){
            printf("%lld\n",1);
        }
        else{
            for(i=3;i<=n;i++){
                for(j=2;j<i;j++){
                    if(i%j==0){
                        box[i]=1;
                    }
                }
            }
            for(i=2;i<=n;i++){
                if(box[i]==0){
                    count++;
                }
            }
            printf("%lld\n",count);
        }
        count=0;
    }
return 0;
}