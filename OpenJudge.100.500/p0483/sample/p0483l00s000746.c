#include<stdio.h>
#include<math.h>
int main(void){
  int N=0;
  int a=0,b=0,c=0;
  scanf("%d",&N);
  a=N/100;
  b=(N-a*100)/10;
  c=(N-a*100-b*10);
  if(a==7||b==7||c==7)printf("Yes");
  else printf("No");
return 0;
}