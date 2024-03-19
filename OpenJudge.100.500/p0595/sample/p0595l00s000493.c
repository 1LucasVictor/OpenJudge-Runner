#include<stdio.h>
int main(void){
        int i,a,b,k,n,f[100],p=0;
        scanf("%d%d%d",&a,&b,&k);
        if(a>=b) n=a/2+1;
        else n=b/2+1;
        for(i=n;i>0;i--)
                if((a%i==0)&&(b%i==0)){
                        f[p]=i;
                        p++;}
        printf("%d",f[k-1]);
        return 0;
}
