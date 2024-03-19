#include<stdio.h>

int main(){
 int i,n;
 double x1,y1,x2,y2,x3,y3,x4,y4,a1,a2;
 scanf("%d",&n);

 for(i=0;i<n;i++){
  scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
          &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
  if(x1!=x2){
   a1=(y1-y2)/(x1-x2);
   a2=(y3-y4)/(x3-x4);
   printf("%s\n",(a1==a2)?"YES":"NO");
  }else{
   printf("%s\n",x3==x4?"YES":"NO");
  }
 } 
 return 0;
}