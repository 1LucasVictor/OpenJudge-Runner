#include <stdio.h>
int main(void){
  int a[4]={0},i,lmt=3;
  for(i=1;i<=3;i++){
    scanf("%d",&a[i]);
  }
  for(i=1;i<=3;i++){
    if(a[i]==5) {lmt--;a[i]=0;break;}
}
  for(i=1;i<=3;i++){
    if(a[i]==7) {lmt--;a[i]=0;break;}
}
  for(i=1;i<=3;i++){
    if(a[i]==5) {lmt--;a[i]=0;break;}
}
  if(lmt==0) printf("YES");
  else printf("NO");
  return 0;
}