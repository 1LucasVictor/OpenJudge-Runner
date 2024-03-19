#include <stdio.h>
#define w 200001
int main(void){
    // Your code here!
    int n,m;
    long int k;
    scanf("%d %d %ld",&n,&m,&k);
    
    long int a[w];
    long int A[w];
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
        if(i==0){
            A[i]=0;
        }
        A[i+1]=A[i]+a[i];
        
    }
    
    long int b[w];
    long int B[w];
    for(int i=0;i<m;i++){
        scanf("%ld",&b[i]);
        if(i==0){
            B[i]=0;
        }
        B[i+1]=B[i]+b[i];
        
    }
    
    int p=0;
    int mo=m;
    for(int i=0;i<=n;i++){
        if(A[i]>k)break;
        
        for(int j=mo;j>=0;j--){
            if(A[i]+B[j]<=k){
                if(i+j>p)p=i+j;
                mo=j;
                break;
            }
        }
        
    }
    
    
    printf("%d",p);
}