# include<stdio.h>
# include<stdlib.h>

int main(void){
  char s[4];
  scanf("%s", s);
  int count = 0;
  int i;
  int j;
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if(s[i]==s[j]){
        count +=1;
      }
    }
    if(count!=2){
      printf("No");
      return 0;
    }else{
      count = 0;
    }
  }
  printf("Yes");
  return 0;
}