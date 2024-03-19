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
      ans=2019;
      for(int i=1;i<=r-l;i++){
        for(int j=l;j<=r-i;j++){
          if((j*(j+i))%2019<ans){
            ans=(j*(j+i))%2019;
          }
        }
      }
      
      printf("%d",ans);
    }
    return 0;
}

