#include<stdio.h>
int mini(int a,int b){
  if(a>b) return b;
  return a;
}
int main(void){
  int l,r,i,j,ans=1e9;
  scanf("%d %d",&l,&r);
  if(r-l < 2019){
    for(i=l;i<r;i++){
      for(j=i+1;j<=r;j++){
        ans = mini(ans,(i%2019)*(j%2019));
      }
    }
  }
  else ans = 0;
  printf("%d\n",ans);
  return 0;
}