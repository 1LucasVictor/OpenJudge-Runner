#include<stdio.h>
int main(){
  int shain, i, tmp;
  scanf("%d",&shain);
  int buka[shain];
  int hoge_len = sizeof(buka) / sizeof(buka[0]);
    for (int i = 0; i < hoge_len; i++) {
        buka[i] = 0;
    }
  
  for(i = 0; i<shain-1; i++){
    tmp = 0;
    scanf("%d",&tmp);
    buka[tmp-1] += 1;
  }
 
  for(i=0;i<shain;i++){
    printf("%d\n", buka[i]);
  }
 
  return 0;
 
}