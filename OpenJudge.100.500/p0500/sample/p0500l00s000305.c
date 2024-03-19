#include<stdio.h>
#include<math.h>

int main(void){
  int n , m;
  scanf("%d %d",&n,&m);

  int s[m] , c[m];
  for(int i = 0;i < m;i ++){
    scanf("%d %d",&s[i],&c[i]);
  }
  int keta[4] ={0} , flag[4] = {0} , ans = 0;
  for(int i = 0;i < m;i ++){
    if(flag[s[i]-1] == 0){
      keta[s[i]-1] = c[i];
      flag[s[i]-1] = 1;
    }
    else{
      if(keta[s[i]-1] != c[i]){
        ans = -1;
      }
    }
  }
  if(keta[0] == 0){
    if(flag[0] == 1){
      if(n != 1){
      ans = -1;
      }
    }
    else{
      keta[0] = 1;
    }
  }
  if(ans == -1){
    printf("%d\n",ans);
  }
  else{
    int temp = n;
    while(temp > 0){
      ans += keta[n-temp] * pow(10,temp-1);
      temp --;
    }
    printf("%d\n",ans);
  }
  return 0;
}