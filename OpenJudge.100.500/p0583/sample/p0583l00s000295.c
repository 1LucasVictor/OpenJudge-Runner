#include <stdio.h>
int main(){
  int n,a,b,c,d;
  scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
  char s[n+1];
  scanf("%s", s);
  int i;
  int space = 0;
  int max_space = 0;
  for(i=a-1;i<n;i++){
    if(s[i] == '#'){
      space = 0;
      if(i > 0 && s[i-1] == '#'){
        puts("No");
        return 0;
      }
    }else{
      if(i >= b - 2){
        space++;
        if(space > max_space){
          max_space = space;
        }
      }
    }
    //printf("i %d space %d max %d\n", i, space, max_space);
    if(i == d && d < c && max_space < 3){
      puts("No");
      return 0;
    }
    if(i >= c - 1 && i >= d - 1){
      puts("Yes");
      return 0;
    }
  }
  return 0;
}
