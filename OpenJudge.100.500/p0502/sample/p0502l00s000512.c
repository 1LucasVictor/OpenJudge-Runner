#include <stdio.h>
int main(void){
  int a,i,flag=0,flag2=0;
  scanf("%d",&a);
  int b[a];
  for(i=0;i<a;i++){
  	scanf("%d",&b[i]);
    if( b[i]%2==0){
        flag2++;
    if( b[i]%10==0 || b[i]%6==0)
        flag++;
  }
  }
  if(flag==flag2){
    printf("APPROVED");
    return 0;
  }
  	printf("DENIED");
    return 0;
}