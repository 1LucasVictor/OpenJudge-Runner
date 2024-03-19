#include <stdio.h>
#include <string.h>
int main(void)
{
  char t1[1001],t2[8],t3[1001];
  int i,j,n,a,b;
 
  scanf("%s\n%d",t1,&n);
 
  for(i=0;i<n;i++){
    scanf("%s %d %d",t2,&a,&b);
     
    if(!strcmp(t2,"reverse")){
      for(j=a;j<=b;j++)
        t3[b-j]=t1[j];
      for(j=a;j<=b;j++)
        t1[j]=t3[j-a];
    }
 
    if(!strcmp(t2,"replace")){
      scanf("%s",t3);
      for(j=0;t3[j]!='\0';j++)
        t1[a+j]=t3[j];
    }
 
    if(!strcmp(t2,"print")){
      for(j=a;j<=b;j++)
        printf("%c",t1[j]);
      printf("\n");
    }
  }
 
  return 0;
}
