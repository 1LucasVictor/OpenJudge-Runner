#include<stdio.h>
int main(){
  char s[11],t[11];
  int i,i1;
  scanf("%s",s);
  scanf("%s",t);
  for(i=0; s[i]!='\0'; ++i);
  for(i1=0; t[i1]!='\0'; ++i1);
  if(i1!=(i+1)){
        printf("No\n");
        return 0;
  }
	for(int j=0;j<i;j++){
      if(s[j]!=t[j]){
        printf("No");
        return 0;
      }
    }
  printf("Yes");
}