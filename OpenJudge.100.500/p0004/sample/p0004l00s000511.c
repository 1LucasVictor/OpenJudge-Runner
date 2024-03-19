
#include <stdio.h>
int main(void) {
  unsigned int i,j;
  unsigned int a,b;
  while(scanf("%d %d",&a,&b)!=EOF){
    for(i=a*(a<=b)+b*(a> b);;i--)
      if(!(a%i) && !(b%i))
	break;
    for(j=i;;j+=i)
      if(!(j%a) && !(j%b))
	break;
    printf("%d %d\n",i,j);
  }
  return 0;
}