#include<stdio.h>

int main()
{
  int n[2];
  int ansPt;
  int ans;
  ansPt = 0;
  for(int i = 0;i < 2;i++){
    scanf("%d",&n[i]);
    if(n[i] >= 10){
      ansPt = 1;
    }
  }
  
  if(ansPt == 0){
    ans = n[0] * n[1];
    printf("%d\n",ans);
  }else{
    printf("%d\n",-1);
  }
  
  return 0;
}
