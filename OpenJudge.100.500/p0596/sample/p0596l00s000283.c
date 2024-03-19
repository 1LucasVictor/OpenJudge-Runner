#include<stdio.h>
#include<string.h>

int main(void){

  char S[100001];
  int zero = 0 , one = 0;         //0と1の個数
  scanf("%s", S);
  int len = strlen(S);            //文字列の長さ

  for(int i = 0 ; i < len ; i++){

    if(S[i] == '0'){
      zero++;
    }else if(S[i] == '1'){
      one++;
    }

  }

  int ans = (zero < one) ? zero * 2 : one * 2;

  printf("%d", ans );


  return 0;
}