#include<stdio.h>

int main(void)
{
char buf[100];
int X;

fgets(buf, sizeof(buf), stdin);
sscanf(buf, "%d", &X);

if(X >=30){
  printf("Yes");
}else{
  printf("No");
}
}
  