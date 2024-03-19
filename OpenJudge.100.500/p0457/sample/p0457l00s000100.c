#include <stdio.h>


int main(void){
    // Your code here!
long long int a[200001];
long long int b[200001];
int n,m,k;
   
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(i!=0){
            a[i]+=a[i-1];
        }
    }
     for(int i=0;i<m;i++){
        scanf("%lld",&b[i]);
         if(i!=0){
            b[i]+=b[i-1];
        }
    }
    int max=0;
    
for(int i=0;i<n;i++){
    if(a[i]>k){break;}
    for(int j=0;j<m;j++){
        if(a[i]+b[j]>k){break;}
        if(a[i]+b[j]<=k){
            if(i+j+2>max){
            max=i+j+2;
            }
        }
    }
}

    /*
    for(int i=0;i<n;i++){
        printf("%lld ",a[i]);
    }
     for(int i=0;i<m;i++){
        printf("%lld ",b[i]);
    }*/
    
   printf("%d",max);
}