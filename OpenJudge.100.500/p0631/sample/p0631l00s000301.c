#include<stdio.h>
 
int main(void) {
  
  int A,B,X;
  int cat;
  scanf("%d %d %d",&A,&B,&X);

  if((A<1 || A>100) || (B<1 || B>100) || (X<1 || X>200)){
    printf("NO\n");
    return 0;
  }
  
  if((A+B)<X){
    printf("NO\n");
    return 0;
  }

  if((X-A)<=B && (X-A)>=0){
    printf("YES\n");
    return 0;
  }else{
    printf("NO\n");
    return 0;
  }
 
  return 0;
}
