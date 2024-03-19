#include <stdio.h>

//if文多くてコード汚いのどうにかしたいけれど、そんな技術は生憎持ち合わせていない

int main(){
  int a,b,c,k;
  scanf("%d%d%d%d",&a,&b,&c,&k);
  
  int max = 0;
  for(int i=k; i>0; i--){
    if(a>0){
      max += 1;
      a--;
    }else{
      if(b>0){
        max += 0;
        b--;
      }else{
        if(c>0){
          max -= 1;
          c--;
        }
      }
    }
  }
  printf("%d",max);
}