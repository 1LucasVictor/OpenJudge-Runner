#include <stdio.h>
int a[200001];
int b[200001];

int main(void){
    // Your code here!
       
    int n,m,k;
   
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i!=0){
            a[i]+=a[i-1];
        }
    }
     for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
         if(i!=0){
            b[i]+=b[i-1];
        }
    }
    int max=0;
    
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]+b[j]<k){
            if(i+j+2>max){
            max=i+j+2;
            }
        }
    }
}

    /*
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
     for(int i=0;i<m;i++){
        printf("%d ",b[i]);
    }*/
    
   printf("%d",max);
}