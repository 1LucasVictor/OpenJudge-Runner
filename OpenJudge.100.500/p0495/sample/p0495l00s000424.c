#include<stdio.h>

int main(void){

char s[4];

int i;

scanf("%s",&s);

for(i=0;i<4;i++){
  if(s[i]=='\0'){break;}
}

if(i!=3){
  printf("No");
}else if(s[0]!=s[1]||s[1]!=s[2]||s[2]!=s[0]){
printf("Yes");
}else{
printf("No");
}

return 0;
}
