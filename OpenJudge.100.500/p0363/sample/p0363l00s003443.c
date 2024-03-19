#include <stdio.h>

int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);

  if(a <= b){
    if(b <= c)//a<=b<=c
      printf("%d %d %d\n",a,b,c);
    else{
      if(c < a)//c<a<=b
	printf("%d %d %d\n",c,a,b);
      else//a<c<b
	printf("%d %d %d\n",a,c,b);
    }
  }
  else{
    if(c <= b)//c<=b<a
      printf("%d %d %d\n",c,b,a);
    else{
      if(a <= c)//b<a<=c
	printf("%d %d %d\n",b,a,c);
      else//b<c<a
	printf("%d %d %d\n",b,c,a);  
    }
  }
  
  return 0;
}