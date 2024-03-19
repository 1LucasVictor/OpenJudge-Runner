#include <stdio.h>
#include <string.h>

int main () {
  int i,j,num,a,b;
  char str[101],tem[101],com[20];

  scanf("%s",str);
  scanf("%d",&num);

  for(i=0;i<num;i++){
    scanf("%s %d %d",com,&a,&b);
    if(strcmp(com,"print")==0){
      for(j=a;j<=b;j++) printf("%c",str[j]);
      printf("\n");
    }
    if(strcmp(com,"replace")==0){
      scanf("%s",tem);
      for(j=a;j<=b;j++) str[j]=tem[j-a];
    }
    if(strcmp(com,"reverse")==0){
      for(j=a;j<=b;j++) tem[j]=str[j];
      for(j=a;j<=b;j++) str[j]=tem[b-(j-a)];
    }
  }
  return 0;
}