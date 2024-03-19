#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
 
int main()
{
 
    char  s[4];
    int cnt=0;
  int i;
 // 整数の入力
    scanf("%s", s);
//    printf("%s\n",s);

  for(i=0;i < 3 ;i++ ){
//    printf("%c\n",s[i]);
    if(49 == s[i]){ 
     cnt = cnt + 1;
//     printf("%d\n",cnt);
              }
  }
     printf("%d\n", cnt);
 
    return 0;
}