#include <stdio.h>

int main(int argc,char* argv[]){
  double x1,y1,x2,y2,x3,y3,x4,y4;
  int n,i;
  double s_1,s_2;
  double temp1,temp2;
  
  scanf("%d",&n);

  for(i = 0;i < n; ++i){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    
    if(x1 > x2){
      temp1 = x1;
      x1 = x2;
      x2 = temp1;
      temp1 = y1;
      y1 = y2;
      y2 = temp1;
    }

    if(x3 > x4){
      temp1 = x3;
      x3 = x4;
      x4 = temp1;
      temp1 = y3;
      y3 = y4;
      y4 = temp1;
    }
    
    if(x1 != x2){
      s_1 = (y2 - y1)/(x2 - x1);
    }else{
      s_1 = 0;
    }
    
    if(x3 != x4){
      s_2 = (y4 - y3)/(x4 - x3);
    }else{
      s_2 = 0;
    }
    
    if(s_1 - s_2 <= 0.001 && s_2 - s_1 <= 0.001){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
    
  }
  
  return 0;
}