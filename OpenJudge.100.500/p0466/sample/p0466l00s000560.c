#include<stdio.h>
#include<string.h>

int main(void){
  int i;
  char s[20], t[20];

  scanf("%s", &s);
  scanf("%s", &t);

  //printf("%d", sizeof(s));

  for(i = 0; s[i] == t[i] && i < strlen(s); i++){

  }

  if(i == strlen(s)){
    printf("Yes");
  }else{
    printf("No");
  }

}
