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
      for(int i=l;i<=r-1;i++){
        for(int j=1;j<=r-l;j++){
          if((i*(i+j))%2019<ans){
            ans=(i*(i+j))%2019;
          }
        }
      }
      
      printf("%d",ans);
    }
    return 0;
}
