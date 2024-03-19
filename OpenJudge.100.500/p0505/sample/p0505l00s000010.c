#include <stdio.h>
int main(int argc, char const *argv[]) {
  long long int h=0,x=0,ans=0,a=0;
  long long int max=0,maxu=0;
  scanf("%d %d",&h,&a);
  long long int d[a];
  for (int i = 0; i < a; i++) {
    scanf("%d",&d[i]);
  }
  for (int i = 0; i < a; i++) {
    if (max<d[i]) {
      max=d[i];
    }
  }
  for (int i = 0; i < a; i++) {
    if (max>d[i]&&maxu<d[i]) {
      maxu=d[i];
    }
  }
  if (max+maxu>h) {
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
