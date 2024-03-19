#include <stdio.h>
int main(void){
    int a[11]={0};
    int n;
    int i;
    
    while(scanf("%d",&n) != EOF){
        if(n==0){
            printf("%d\n",a[0]);
            for(i=0;i<=10;i++){
                a[i]=a[i+1];
            }
        }
        
        else{
            for(i=10;i>=1;i--){
                a[i]=a[i-1];
            }
            a[0]=n;
        }
    }
    
    return 0;
}