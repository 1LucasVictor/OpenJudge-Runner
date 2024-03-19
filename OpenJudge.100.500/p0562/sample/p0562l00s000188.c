#include <stdio.h>

int plug_add(int A,int B);
int main(){
  int A,B;

  scanf("%d %d",&A,&B);
  printf("%d\n",plug_add(A,B));

  return 0;
}
int plug_add(int A,int B){
  int ct=0,p=1;
  while(p-ct<B){
    ct++;
    p+=A;
  }

  return ct;
}
