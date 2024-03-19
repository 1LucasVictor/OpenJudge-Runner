//author:luckYrat(twitter:@luckYrat_)
//#include <bits/stdc++.h>
#include <stdio.h>
int main(){
  int n,m;scanf("%d %d",&n,&m);
  int ans[n];
  for(int i = 0; n > i; i++){
    ans[i] = -1;
  }
  for(int i = 0; m > i; i++){
    int a,b;scanf("%d %d",&a,&b);
    a--;
    if(!(ans[a] == -1 || ans[a] == b)){
      printf("-1");
      return 0;
    }
    ans[a] = b;
  }
  if(n==1 && ans[0] < 1){
    printf("0");
    return 0;
  }
  if(ans[0] == 0){
    printf("-1");
    return 0;
  }
  for(int i = 0; n > i; i++){
    
    if(!i){
      if(ans[i] != -1){
         printf("%d",(ans[i]));
      }else{
         printf("1");
      }
     
    }else{
      if(ans[i] != -1){
         printf("%d",(ans[i]));
      }else{
         printf("0");
      }
    }
  }printf("\n");
}
