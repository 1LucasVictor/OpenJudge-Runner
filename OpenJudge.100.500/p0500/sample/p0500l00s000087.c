#include <stdio.h>

int main(void){
  int n, m;
  int s[5], c[5];
  
  scanf("%d %d", &n, &m);
  for(int i=0; i<m; i++){
    scanf("%d %d", &s[i], &c[i]);
  }
  if(n==1){
    int a1 = 0;
    int flag1 = 0;
    for(int i=0; i<m; i++){
      if(s[i] == 1){
        a1 = c[i];
        flag1++;
      }
    }
    if(flag1==1){
      printf("%d", a1);
      return 0;
    }else{
      printf("%d", -1);
      return 0; 
    }
  }else if(n==2){
    if(s[0] == s[1]){
      if(c[0] != c[1]){
        printf("%d", -1);
        return 0;
      }
    }
    int a1 = 0;
    int a10 = 0;
    int flag1 = 0;
    int flag10 = 0;
    for(int i=0; i<m; i++){
       if(s[i] == 2){
          a1 = c[i];
          flag1++;
        }else if(s[i] == 1){
          a10 = c[i]*10;
         flag10++;
       }
      }
    if(a10 != 0){
      printf("%d", a1 + a10);
      return 0;
    }else{
      printf("%d", -1);
      return 0;
    }
  }else if(n==3){
    if(s[0] == s[1]){
      if(c[0] != c[1]){
        printf("%d", -1);
        return 0;
      }
    }
    if(s[1] == s[2]){
      if(c[1] != c[2]){
        printf("%d", -1);
        return 0;
      }
    }
    if(s[0] == s[2]){
      if(c[0] != c[2]){
        printf("%d", -1);
        return 0;
      }
    }
    int a1 = 0;
    int a10 = 0;
    int a100 = 0;
    int flag1 = 0;
    int flag10 = 0;
    int flag100 = 0;
    for(int i=0; i<m; i++){
      if(s[i] == 3){
          a1 = c[i];
          flag1++;
      }else if(s[i] == 2){
          a10 = c[i]*10;
         flag10++;
      }else if(s[i] == 1){
        a100 = c[i]*100;
        flag100 ++;
      }
    }
    if(a100 != 0){
      printf("%d", a1 + a10 + a100);
      return 0;
    }else{
      printf("%d", -1);
      return 0;
    }
  }else{
    printf("%d", -1);
  }
  return 0;
}
