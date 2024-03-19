#include<stdio.h>

int main(void){
  char e,b,c,d;
  int a[4];

  scanf("%c%c%c%c",&e,&b,&c,&d);
  a[0]=e;
  a[1]=b;
  a[2]=c;
  a[3]=d;

  if((a[0]==a[1])&&(a[2]==a[3])){
    printf("Yes\n");
  }
  else if((a[0]==a[2])&&(a[1]==a[3])){
    printf("Yes\n");
  }
  else if((a[0]==a[3])&&(a[1]==a[2])){
    printf("Yes\n");
  }
  else if((a[1]==a[2])&&(a[0]==a[3])){
    printf("Yes\n");
  }
  else if((a[1]==a[3])&&(a[0]==a[2])){
    printf("Yes\n");
  }
  else if((a[3]==a[2])&&(a[1]==a[0])){
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }

  return 0;
}
