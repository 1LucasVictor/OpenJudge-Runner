#include<stdio.h>
#include<string.h>

int main(){
  char a[200],b[200];
  int s,h,i;

  while(1){
    scanf("%s",a);
    if(strcmp(a,"-")==0)
      break;

    strcpy(b,a);

    scanf("%d",&s);

    for(i=0;i<s;i++){
      scanf("%d",&h);
      strcpy(a,&b[h]);
      strncpy(&a[strlen(a)],b,h);
      strcpy(b,a);
    }
    printf("%s\n",a);
  }


  return 0;
}