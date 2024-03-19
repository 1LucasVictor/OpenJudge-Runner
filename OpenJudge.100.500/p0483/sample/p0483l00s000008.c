#include<stdio.h>
#include<string.h>
int main(void){
  char str[100];
  char *adr;
  scanf("%s",str);
  adr = strchr(str,(int)'7');
  if(adr == '\0'){
		printf("No");
  }else{
    printf("Yes");
  }
return 0;
}
