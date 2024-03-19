#include<stdio.h>
int main(){
  int a,b,c,temp;
  scanf("%d%d",&a,&b);

  if(a < b){
    temp = a;
    a = b;
    b = temp;
}

  c = a % b;
  while(c != 0){
    a = b;
    b = c;
    c = a % b;
}
  printf("%d\n",b);
 
  return 0;
}