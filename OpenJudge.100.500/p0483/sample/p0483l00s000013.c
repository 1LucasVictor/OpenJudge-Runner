#include<stdio.h>

int main()
{
  int num, dig, tmp;
  scanf("%d",&num);
  while(num){
    dig = num%10;
    if(dig == 7){
      printf("Yes");
      tmp++;
      break;
    }
  }
  if(tmp == 0){
    printf("No");
   }
  return 0;
}