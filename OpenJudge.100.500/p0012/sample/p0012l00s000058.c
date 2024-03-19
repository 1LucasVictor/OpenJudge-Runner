#include <stdio.h>
int main(){
  int n,s[10] = {},q[10] = {},i,l = 0,k = 0,e = 0;
  while(scanf("%d",&n) != EOF){
      if(n > 0){
        s[k] = n;
        k++;
      }else if(n == 0){
        k = k - 1;
        q[l] = s[k];
        l++;
        s[k] = 0;
      }
  }
  for(i = 0;i < l;i++){
    printf("%d\n",q[i]);
  }
  return 0;
}