#include <stdio.h>
int main(){
  int t,h,m,s;
  scanf("%d",&t);
  if(t>=0 && t<=86400){
    h=t/3600;
    s=t%60;
    m=(t-h*3600-s)/60;
    printf("%d:%d:%d\n",h,m,s);
  }else printf("");
  return 0;
}