#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && b<c)
	  printf("%d %d %d\n",a,b,c);
	 else if(a>b && a<c)
	  printf("%d %d %d\n",b,a,c);
	 else if(b>c && a<c)
	  printf("%d %d %d\n",a,c,b);
	 else if(a>c && a<b)
	  printf("%d %d %d\n",c,a,b);
	return 0;
}