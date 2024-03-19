#include<stdio.h>
int main(){
  double H, W, r, x, y;
  scanf("%lf %lf %lf %lf %lf",&W, &H, &x,&y,&r);

  if(x-r<0 || y-r<0 || y+r>H || x+r>W){
    puts("No");
  }else{
    puts("Yes");
  }
  return 0;
}

