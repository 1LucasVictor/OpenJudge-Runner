#include<stdio.h>
int main(void){
  int n=0,k,inf,sum,fig,num;
  char x[1001];
  for(inf=0;inf==0;inf*=0){
    sum = 0,n = 0;
    for(k=1;k<=1001;k++){
      scanf("%c",&x[k-1]);
      if(x[k-1]=='\n') break;
      n++;
    }
    if(x[0]=='0') break;
    for(k=1;k<=n;k++){
      num = x[k-1] - 0x30; //???????????????????????§??°???????????¬??????
      /*
      if(x[k-1]==0x30) fig=0; //????????§???????????°????????????
      else if(x[k-1]=='1') fig=1;
      else if(x[k-1]=='2') fig=2;
      else if(x[k-1]=='3') fig=3;
      else if(x[k-1]=='4') fig=4;
      else if(x[k-1]=='5') fig=5;
      else if(x[k-1]=='6') fig=6;
      else if(x[k-1]=='7') fig=7;
      else if(x[k-1]=='8') fig=8;
      else if(x[k-1]=='9') fig=9;
      */
      sum += num;
    }
    printf("%d\n",sum);
  }
  return 0;
}