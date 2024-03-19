#include<stdio.h>
int main(){
  int a,b,c,an;
  scanf("%d %d %d",&a,&b,&c);
  an = c - (a  - b);
  if(an < 0){
	printf("0\n");
  }else{
    printf("%d\n",an);
  }
  return 0;
}