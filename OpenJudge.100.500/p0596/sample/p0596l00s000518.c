#include<stdio.h>

int main(void){
  char s[100001];
  scanf("%s",s);
  int t=0;
  int i;
  while(1){
    if(s[t]=='\0')break;
    t++;
  }
  int array[t];
  for(i=0;i<t;i++){
    array[i]=s[i]-48;
  }
  int zero=0;
  int one=0;
  for(i=0;i<t;i++){
    if(array[i]==0)zero++;
    if(array[i]==1)one++;
  }
  if(zero<one){
    printf("%d\n",zero*2);
  }else{
    printf("%d\n",one*2);
  }
  return 0;
}
