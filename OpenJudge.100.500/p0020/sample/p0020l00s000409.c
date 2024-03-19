#include<stdio.h>


int main(void){
int a,i;
float x1,y1,x2,y2,x3,y3,x4,y4;

scanf("%d",&a);
for(i = 1; i <= a; i++){
  scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);


  if((y2 - y1)/(x2 - y1) == (y4 - y3)/(x4 - x3))
   printf("YES\n");
  
  else
  printf("NO\n");
  
}
return 0;

}
