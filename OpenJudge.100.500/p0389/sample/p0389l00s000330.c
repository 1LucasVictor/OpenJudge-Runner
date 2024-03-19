#include<stdio.h>
#include<string.h>
int main (){
  char box[200];
  int a,b,sum=0;
  while(1){
    sum=0;
    scanf("%s",box);
    if(box[0] == '-')break;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
      scanf("%d",&b);
      sum+=b;
    }
    sum=sum%(strlen(box));
    for(int i=sum;i<strlen(box);i++){
      printf("%c",box[i]);
    }
    for(int i=0;i<sum;i++){
      printf("%c",box[i]);
    }
    printf("\n");
  }
  return 0;
}

