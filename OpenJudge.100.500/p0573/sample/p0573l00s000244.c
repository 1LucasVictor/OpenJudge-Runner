# include<stdio.h>
# include<stdlib.h>

int main(void){
  char s[4];
  scanf("%s", s);
  int count = 0;
  int i;
  char c = s[0];
  for(i=1;i<4;i++){
    if(s[i]!=s[0]){
      count +=1;
    }
  }
  if(count == 2){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}