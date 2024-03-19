#include<stdio.h>
int main(void){ 
    int n; 
    scanf("%d",&n); 
    int a[200005]={0},s[200005]={0}; 
    for(int i=2;i<=n;i++)
      scanf("%d",&a[i]); 
    for(int i=2;i<=n;i++)
      s[a[i]]++; 
    for(int i=1;i<=n;i++)
      printf("%d\n",s[i]); 
  return 0;
}