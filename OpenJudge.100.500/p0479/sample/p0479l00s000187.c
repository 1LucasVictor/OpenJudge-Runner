#include <stdio.h>
int main(void){
  int n,i,a;
  scanf("%d",&n); //社員の数
  int s[n];
  for(i=0;i<n;i++) s[i]=0;
  for(i=0;i<n-1;i++){
    scanf("%d",&a); //上司の番号
    s[a-1]+=1;
  }
  for(i=0;i<n;i++){
    printf("%d\n",s[i]);
  }
  return 0;
}