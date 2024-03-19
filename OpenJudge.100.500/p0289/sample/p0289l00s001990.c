#include <stdio.h>

int main(){

  int a;
  int b;
  int i;
  int answer;

  scanf("%d%d",&a,&b);

  if(a>b){
    for(i=a;i>=1;i--){
      if(a%i==0 && b%i==0)
	break;
    }
  }

    else{
    for(i=b;i>=1;i--){
      if(a%i==0 && b%i==0)
	break;
    }
  }

    if(i==0) answer=1;
    else     answer=i;

    printf("%d\n",answer);

    return 0;
  }