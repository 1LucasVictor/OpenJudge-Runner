#include <stdio.h>
int main(void){
 int a,c=0,i;
 for(i=0;i<3;i++){
  scanf("%1d",&a);
  if(a==1) c++;
 }
 printf("%d",c);
 return 0;
}
