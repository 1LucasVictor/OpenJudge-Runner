#include<stdio.h>

int main(){
  int S_int[10000],N,i,j,count=0,judge=0,length;
  char S_char[10000];

  scanf("%s", S_char);

  for(N=0;N<10000;N++){
    if(S_char[N]=='0'){
      S_int[N]=0;
    }else if(S_char[N]=='1'){
      S_int[N]=1;
    }else{
      break;
    }
  }

  length=N;

  do{

    judge=0;
    for(i=0;i<=length-2;i++){
      if(S_int[i]!=S_int[i+1]){

        for(j=i;j<=length-3;j++){
          S_int[j]=S_int[j+2];
        }

        length=length-2;
        judge=1;
        count++;
        break;
      }
    }
  }while(judge==1);

  printf("%d\n", 2*count);

  return 0;
}
