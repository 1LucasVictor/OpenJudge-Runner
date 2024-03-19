#include<stdio.h>
#include<math.h>

int main(void){

  int n=0,x,i,j;
  char s[5];

  scanf("%s",s);

  for(i=0;i<3;i++){
    if(s[i] == s[i+1]){
      printf("Bad");
      break;
    }
    else
      n++;
  }

  if(n == 3)
  printf("Good");

  return 0;
}
