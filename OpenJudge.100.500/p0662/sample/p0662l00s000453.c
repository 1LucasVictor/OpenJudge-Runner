#include<stdio.h>
int main(void){
int A,B,C,D;
scanf("%d %d %d %d",&A,&B,&C,&D);
if(A<=C){
  if(B<D&&C<B){
    printf("%d\n",B-C);
  }
  else if(B>D){
    printf("%d\n",D-C);
  }
  else{
      printf("0\n");
  }
}
else{
  if(B<D){
    printf("%d",B-A);
  }
  else if(B>D&&A<D){
    printf("%d",D-A);
  }
  else{
      printf("0\n");
  }
}
return 0;
}