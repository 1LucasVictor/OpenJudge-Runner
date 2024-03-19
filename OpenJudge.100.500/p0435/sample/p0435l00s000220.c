#include<stdio.h>
#include<math.h>
int main(void)
{
  int n,x,y,i,p=0;
  float d;
  scanf("%d%f",&n,&d);
  for(i=0;i<n;i++){
    scanf("%d%d",&x,&y);
    if(sqrt((float)x*x+y*y)<=d){
      p++;
  }
  }
  printf("%d\n",p);
  return 0;
}
    
  
  