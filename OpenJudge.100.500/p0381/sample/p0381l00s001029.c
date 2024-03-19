#include<stdio.h>

int main(){
    int n,x,i,j,k,count;

    count=0;
    while(1){
        scanf("%d %d",&n,&x);
        if(n==0 && x==0)break;
        for(i=1;i<n;i++){
            for(j=2;j<n;j++){
                for(k=3;k<n;k++){
                    if(i==j || j==k || k==i)break;
                    else if(i+j+k==x)count++;
                }
            }
        }
        printf("%d\n",count);
        count=0;
    }



 return 0;
}