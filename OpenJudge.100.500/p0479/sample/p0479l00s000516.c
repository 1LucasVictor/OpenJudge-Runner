#include<stdio.h>
int main(){
  int n;
  int a;
  int flag[200020];
  scanf("%d",&n);
  for (int i=2;i<=n;i++){
  	scanf("%d",&a);
  	flag[a]++;
  }
  for (int i=1;i<=n;i++){
  	printf("%d\n",flag[i]);
  }
  return 0;
}