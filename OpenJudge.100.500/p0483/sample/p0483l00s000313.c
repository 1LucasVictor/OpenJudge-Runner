#include<stdio.h>
#include<string.h>
int main(void){
  char str[2000];
  char *adr1,*adr2;
  scanf("%s",str);
  adr1 = strchr(str,(int)'7');
  if(adr1 == '\0'){
printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}