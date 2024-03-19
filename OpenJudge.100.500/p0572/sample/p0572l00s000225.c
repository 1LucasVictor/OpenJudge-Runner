#include <stdio.h>

int main(){
    int l,r,ans;
    int flag=0;
    scanf("%d %d",&l,&r);
    
    for(int i=l;i<=r;i++){
        if(i%2019==0){
            flag=1;
            break;
        }
    }
    
    if(flag==1){
        printf("0");
    }else{
        ans=l%2019;
        printf("%d",(ans*(ans+1))%2019);
    }
    return 0;
}