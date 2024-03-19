#include <stdio.h>
int main (void) {
  int i,j,num,a,b;
  char str[1001],tem[1001],com[20];
  scanf("%s",str);
  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%s %d %d",com,&a,&b);
    if(com[0]=='p'){
      for(j=a;j<=b;j++) 
      printf("%c",str[j]);
      printf("\n");
    }
    else if(com[2]=='p'){
      scanf("%s",tem);
      for(j=a;j<=b;j++) str[j]=tem[j-a];
    }
    else if(com[2]=='v'){
      for(j=a;j<=b;j++) tem[j]=str[j];
      for(j=a;j<=b;j++) str[j]=tem[b-(j-a)];
    }
  }
  return 0;
}
