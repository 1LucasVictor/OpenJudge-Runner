#include<stdio.h>
int main(void)
{
  int num,sum=0;
  char str[1001];
  int i=0,j=0;
  int *p;
  while(1){
    sum = 0;
    int a,b,c,d;
    scanf("%s", str);
    if (str[0]=='0') break;
    else{
      int i = 0;
      while(*(str + i) != 0 && i < 1000) {
	char c = *(str + i);
	num = c - '0';
	sum += num;
	i++;
      }
    
    printf("%d\n",sum);
    }
  }
  return 0;
}