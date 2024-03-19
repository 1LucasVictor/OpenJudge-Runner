#include<stdio.h>
#include<stdlib.h>
main(){
  int i=0,sum=0;
  char temp,string[1001];

  scanf("%s",string);
  while(string[0] !='0' || string[1]!='\0' ){
    i=0;
    sum=0;
//      printf("flag %d %d \n",i,sum);
    while(string[i] !='\0' ){
      temp=string[i];
      sum=sum+atoi(&temp);
//      printf("flag2 %d %d %d\n",i,sum,atoi(&temp));
      i++;
    }
    printf("%d\n",sum);
    scanf("%s",string);
  }

  return 0;
}