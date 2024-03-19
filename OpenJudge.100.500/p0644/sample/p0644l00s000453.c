#include<stdio.h>
int main()
{
    char s[3];
  int counter = 0;
    // 文字列の入力
    scanf("%3s",s);
  if(s[0] == '1')	counter++;
  if(s[1] == '1')	counter++;
  if(s[2] == '1')	counter++;
    // 出力
    printf("%d\n",counter);
    return 0;
}