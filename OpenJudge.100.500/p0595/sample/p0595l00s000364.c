#include <stdio.h>
int main(void){
  int a,b,c;
  int count,count2=0;
scanf("%d %d %d",&a,&b,&c);
for(count=1;;count++){
  if(a%count==0&&b%count==0){count2++;}
  if(count2==c){break;}
}
  printf("%d",count);
return 0;
}