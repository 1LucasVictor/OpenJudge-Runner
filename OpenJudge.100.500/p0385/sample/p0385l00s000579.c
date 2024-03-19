#include<stdio.h>
#include<string.h>

int main(){

  int sum,a,b;
  char x[1000];

  scanf("%s",x);

  while(x[0]!='0'){

    sum=0;
    b=strlen(x);
    for(a=0;a<b;a++){
      sum=sum+x[a]-48;
    }

    

    printf("%d\n",sum);
    
    scanf("%s",x);
  }
  return 0;
}
    
    
    

