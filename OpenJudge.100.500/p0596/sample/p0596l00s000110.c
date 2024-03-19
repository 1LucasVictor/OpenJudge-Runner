#include<stdio.h>

int main(){
  int S_i[100000],N,i,j,count=0,judge=0,length;
  char S_c[100000];

  scanf("%s", S_c);

  for(N=0;N<100000;N++){
    if(S_c[N]=='0'){
      S_i[N]=0;
    }else if(S_c[N]=='1'){
      S_i[N]=1;
    }else{
      break;
    }
  }

  length=N;

  do{
    judge=0;
    for(i=0;i<=length-2;i++){
      if(S_i[i]!=S_i[i+1]){

        for(j=i;j<=length-3;j++){
          S_i[j]=S_i[j+2];
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
