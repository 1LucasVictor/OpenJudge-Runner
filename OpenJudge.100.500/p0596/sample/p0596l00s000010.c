#include<stdio.h>
int main(){
  int i,r=0,a=0;
  char s[100010],d[100010];
  scanf("%s",s);
  for(i=0;s[i];i++){
    if(r&&d[r-1]-s[i]){
      a+=2;
      r--;
    }
    else d[r++]=s[i];
  }
  printf("%d\n",a);
  return 0;
}
