# include <stdio.h>

int main(){
  int s;
  scanf("%d", &s);
  int s1, s2, s3;
  s1 = s/100;
  s2 = (s/10)%10;
  s3 = s%10;
  printf("%d\n",s1 + s2 + s3);
  return 0;
}