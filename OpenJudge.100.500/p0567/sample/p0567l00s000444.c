#include <stdio.h>

int main(){
    int n,k;
    long p=0;
    int flag=0;
    scanf("%d %d",&n,&k);
    
    int a[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=1;i<=n;i++){
        p=p+a[i];
    }
    
    for(long i=p;i>1;i--){
        int f=0;
        int sum=0;
        int c[i];
        if(p%i==0){
            for(long l=0;l<=i-1;l++){
                c[l]=0;
            }
        }
        for(int j=1;j<=n;j++){
            if(p%i!=0){
                break;
            }
            c[a[j]%i]=c[a[j]%i]+1;
            sum=sum+a[j]%i;
        }
        if(p%i==0){
            int div=sum/i;
            
            int sum1=0;
            int d,e;
            for(long l=i-1;l>=0;l--){
                if(sum1+c[l]<div){
                    sum1=sum1+c[l];
                }else{
                    d=sum1+c[l]-div;
                    e=l;
                    break;
                }
            }
            for(int l=0;l<=e-1;l++){
                f=f+c[l]*l;
            }
            f=f+e*d;
            
            if(f<=k){
                printf("%d",i);
                flag=1;
                break;
            }
        }
    }
    
    if(flag==0){
        printf("1");
    }
    
    return 0;
}
