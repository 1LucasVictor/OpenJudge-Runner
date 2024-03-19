#include<stdio.h>
int main(){
  int n,d;
  int ans =0;
  scanf("%d%d",&n,&d);
  
  int x,y;
  for (int i=0;i<n;i++){
    scanf("%d%d",&x,&y);
    if(x*x+y*y<=d*d){
      ans++;
    }
  }
  
  printf("%d",ans);
  return 0;
}
