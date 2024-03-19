#include<stdio.h>

int main() {
   int i;
   int x,y;
   int g;

   scanf("%d%d",&x,&y);

   if (x>=y) {
      for (i=2; i<y; i++)
         if (y%i==0 && (x%y)%i==0)
	    g=i;
	} else {
         for (i=2; i<y; i++)
	    if (x%i==0 && (y%x)%i==0)
               g=i;
	}
	printf("%d\n",g);

}