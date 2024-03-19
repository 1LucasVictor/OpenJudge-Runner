#include<stdio.h>
int main(){
  int a;
  int count1=0,count2=0;
  for(int i=0;i<3;i++){
    scanf("%d ",&a);
    if(a==5) count1++;
    if(a==7) count2++;
  }
  if(count1==2 && count2==1) printf("YES\n");
  else printf("NO\n");
 return 0;
 }