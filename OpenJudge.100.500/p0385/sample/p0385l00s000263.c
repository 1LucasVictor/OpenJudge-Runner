#include <stdio.h>

int main(void){
  char x[1000];
  int sum,i,j;

  while(1){
    sum=0;

    //配列xに文字として１文字ずつ代入していく
    for(i=0;;i++){
      scanf("%c",&x[i]);
      if(x[i]=='\n'){
	break;
      }
    }

    //文字を数値に変換してsumに足していく
    for(j=0;j<i;j++){
      sum+=x[j]-'0';
    }

    if(sum==0){
      break;
    }

    //表示
    printf("%d\n",sum);


  }

  return 0;

}