#include<stdio.h>
#include<math.h>

int main(void){
  int n , m;
  scanf("%d %d",&n ,&m);

  int s[m] , c[m] , keta[4] = {0,-1,-1,-1};
  int ans = 0;
  for(int i = 0;i < m;i ++){
    scanf("%d %d",&s[i],&c[i]);
    if(keta[s[i]] > -1 && keta[s[i]] != c[i]){
      ans = -1;
    }
    else{
      keta[s[i]] = c[i];
    }
  }
  int temp = n;
  if(keta[1] == 0){
    if(n != 1){
      ans = -1;
    }
  }
  else if(keta[1] == -1){
    keta[1] = 1;
  }
  if(keta[2] == -1){
    keta[2] = 0;
  }
  if(keta[3] == -1){
    keta[3] = 0;
  }
  if(ans != -1){
    while(temp >= 0){
      ans += keta[temp] * pow(10,n-temp);
      temp--;
    }
  }
  
  printf("%d\n",ans);

  return 0;
}
