#include <stdio.h>
int main(){
 int N;
 scanf("%d",&N);
 int m=N%10;
 if(m==3)printf("bon");
  else if(m==0||m==1||m==6||m==8)printf("pon");
   else printf("hon");
 return 0;
}