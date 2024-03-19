#include <stdio.h>
  
int main(){
    int d,n;
    int ans=1;
    scanf("%d %d",&d,&n);
    if(n!=100){
        for (int i=0;i<d;i++){
            ans*=100;
        }
        ans*=n;
    }else{
        for (int i=0;i<=d;i++){
            ans*=100;
        }   
    }   
    printf("%d",ans);
    return 0;
}