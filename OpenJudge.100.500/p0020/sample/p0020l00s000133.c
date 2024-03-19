#include<stdio.h>

typedef struct point{
 float x;
 float y;
}point;

int main(){
 int n,i;
 point A,B,C,D;
 float m1,m2;
 scanf("%d",&n);
 for(i=0;i<n;i++){

  scanf("%f %f",&A.x,&A.y);
  scanf("%f %f",&B.x,&B.y);
  scanf("%f %f",&C.x,&C.y);
  scanf("%f %f",&D.x,&D.y);

  m1=(A.y-B.y)*(C.x-D.x);
  m2=(A.x-B.x)*(C.y-D.y);

  if(m1==m2)printf("YES\n");
  else printf("NO\n");

 }

 return 0;

}
