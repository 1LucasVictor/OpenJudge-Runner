#include <stdio.h>
int main(void) {
   int i,n;
   float ax,ay,bx,by,cx,cy,dx,dy,ab,cd;
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   scanf("%f %f %f %f %f %f %f %f",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy);
	   ab=(by-ay)/(bx-ax);
	   cd=(dy-cy)/(dx-dy);
	  if(ab==cd){printf("YES\n");}else{printf("NO\n");}
   }
   return 0;
}

