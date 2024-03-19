#include<stdio.h>
int main(){
char s[15],t[15];
  int i,j,k;

scanf("%s",s);
  scanf("%s",t);
  
  for(i=0; s[i]!='\0'; ++i);
  for(j=0; t[j]!='\0'; ++j);

  if(i==j-1){
    for(k=0;k<i;k++){
      if(s[k]!=t[k]){
        printf("No\n");
        return 0;
      }
    }
  }
    if(i!=j-1){
              printf("No\n");
        return 0;
    }
      
    printf("Yes\n");
    return 0;
    

}
