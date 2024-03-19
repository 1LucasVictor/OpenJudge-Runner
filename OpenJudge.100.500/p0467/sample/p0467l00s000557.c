#include <stdio.h>

int main(){
  int a,b,c,k;
  scanf("%d%d%d%d",&a,&b,&c,&k);
  
  int ans = 0;
  
  if(k <= a){
    // 1 だけをつかえたら全部 1
    ans = k;
    k = 0;
  }else{ 
    //他のも使わないといけない
    //とりあえず使えるだけ 1 を使う
    ans = a;
    k -= a;
  }
  
  //のこりはとりあえず使えるだけ 0 を使ったことにする
  k -= b;
  
  //まだ使わないといけなかったら
  if(k>0){
    //仕方ないので -1 を使う
    ans -= k;
  }
  
  printf("%d\n",ans);
}
