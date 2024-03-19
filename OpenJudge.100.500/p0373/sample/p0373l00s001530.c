#include <stdio.h>

int main(){
  int h, w, i, j;
  while(scanf("%d%d", &h, &w) && h && w){
    for(i = 0;i < h;i++){
      for(j = 0;j < w;j++){
        if(!i || !j || i == h - 1 || j == w - 1) putchar('#');
        else putchar('.');
      }
      puts("");
    }
    puts("");
  }
  return 0;
}