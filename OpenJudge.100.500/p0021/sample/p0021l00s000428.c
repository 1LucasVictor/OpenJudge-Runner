#include<stdio.h>
 
int main(void){
    int n,i,l;
    long a[5000],ans,s;
     
    for(i=0;i<5000;i++)a[i]=NULL;
     
    while(scanf("%d",&n)){
        if(n==0)break;
        ans=-100000;
        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
        }
         
        for(i=0;i<n;i++){
            s=0;
            for(l=i;l<n;l++){
                s+=a[l];
                if(ans<s)ans=s;
            }
        }
         
        printf("%ld\n",ans);
    }
    return 0;
}