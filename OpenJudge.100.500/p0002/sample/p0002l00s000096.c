#include <stdio.h>

int main(void)
{
  int num;
  int yesno[1000];
  int i, flag;
  int a, b, c;

  scanf("%d", &num);

  for(i = 0; i < num; i++){
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c) flag = 0;
    if(b > a && b > c) flag = 1;
    if(c > a && c > b) flag = 2;

    // YES→1 NO→0
    switch(flag){
    case 0: 
      if(a*a == b*b + c*c){
	yesno[i] = 1;
      } else {
	yesno[i] = 0;
      }
      break;
    case 1: 
      if(b*b == a*a + c*c){
	yesno[i] = 1;
      } else {
	yesno[i] = 0;
      }
      break;
    case 2:
       if(c*c == b*b + a*a){
	yesno[i] = 1;
      } else {
	yesno[i] = 0;
      }
       break;
    }
  }

  for(i = 0; i < num; i++){
    if(yesno[i] == 1){
      printf("YES\n");
    } else if(yesno[i] == 0){
      printf("NO\n");
    }
  }

  return 0;
}