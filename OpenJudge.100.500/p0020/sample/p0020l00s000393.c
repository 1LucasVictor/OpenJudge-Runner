#include<stdio.h>
int main(){
  double x1,x2,x3,x4,y1,y2,y3,y4,ans1,ans2;
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    ans1 = (y2-y1)/(x2-x1);
    ans2 = (y4-y3)/(x4-x3);
    if(ans1 == ans2){
      puts("YES");
    }else{
      puts("NO");
    }
  }
  return 0;
}
  