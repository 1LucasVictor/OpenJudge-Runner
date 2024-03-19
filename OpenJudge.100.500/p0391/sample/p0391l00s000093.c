#include <stdio.h>
#include <string.h>
  
int main(void){
  char word[1010],temp[10],p[1010];
  int i,j,k,t,a,b,trial;
  
  scanf("%s",word);  scanf("%d",&trial);
  for(i=0;i<trial;i++){
    scanf("%s",temp);
    if(strcmp(temp,"print")==0){
      scanf("%d%d",&a,&b);
      for(j=a;j<=b;j++)  printf("%c",word[j]);
      printf("\n");
    } else if(strcmp(temp,"reverse")==0) {
      scanf("%d%d",&a,&b);
      for(j=a,k=b;j<=k;j++,k--){
        t=word[j];
        word[j]=word[k];
        word[k]=t;
      }
    } else if(strcmp(temp,"replace")==0) {
      scanf("%d%d",&a,&b);  scanf("%s",p);
      for(j=a;j<=b;j++)  word[j]=p[j-a];
    }
  }
  
  return 0;
}