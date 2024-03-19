#include <stdio.h>

int main() {
  int enemy_hp;
  long bear_at[]={0};
  int num = 0;
  int tmp=0;
  int tmp_hp;
  int i;
  scanf("%d", &enemy_hp);  
  scanf("%d", &num);
  tmp_hp=enemy_hp;
  for(i=0;i<num;i++){
      scanf("%ld",&bear_at[i]);
      tmp+=bear_at[i];
  } 
  if(tmp_hp<=tmp)printf("Yes");
  else printf("No");
  return 0;
}