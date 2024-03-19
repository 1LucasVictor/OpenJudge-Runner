#include<stdio.h>
int main(){
double x1,y1,x2,y2,x3,y3,x4,y4;
int counter=0;
scanf("%d",&counter);
int i=1;
double k1,k2;
while(i<=counter){
   scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
   if(x2==x1&&x4==x3)
     printf("YES\n");
   else if(x2!=x1&&x4==x3)
     printf("NO\n");
   else if(x2==x1&&x4!=x3)
     printf("NO\n");
   else{
   k1=(y2-y1)/(x2-x1);
   k2=(y4-y3)/(x4-x3);
   if(k1==k2)
      printf("YES\n");
	else
	   printf("NO\n");
	   }
   i++;
   }
   return 0;
   }