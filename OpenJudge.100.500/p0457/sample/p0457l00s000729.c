#include <stdio.h>


int main(void){
    // Your code here!
long long int a[200001];
long long int b[200001];
int n,m,k;
   
   a[0]=0;
   b[0]=0;
   
   
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        a[i]+=a[i-1];
    }
     for(int i=1;i<=m;i++){
        scanf("%lld",&b[i]);
        b[i]+=b[i-1];
    }

int i=0;
int max=1;


while(1==1){
    //printf("%lld %lld %d %d\n",a[i],b[max-i],i,max);
    if(max-i<=m){
    if(a[i]+b[max-i]<=k){
        //printf("ok%lld %lld %d %d\n",a[i],b[max-i],i,max);
        max++;
        i=0;
        if(max>m){
            i=max-m-1;
        }
    }
    }
    
    i++;
    if(i>n){break;}
    if(i>max){break;}
}



    /*
    for(int i=0;i<n;i++){
        printf("%lld ",a[i]);
    }
     for(int i=0;i<m;i++){
        printf("%lld ",b[i]);
    }*/
    
   printf("%d",max-1);
}
