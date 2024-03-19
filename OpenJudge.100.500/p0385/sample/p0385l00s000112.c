#include<stdio.h>
int main(){
  char x[1001];
  int temp,i,total,esa;
  while(scanf("%s",x)!=EOF){
    if(x[0]=='0')break;
    total=0;
    temp=strlen(x);
    for(i=0;i<temp;i++){
      esa=x[i]-'0';
      total+=esa;
    }
    printf("%d\n",total);
  }
  return(0);
}
		  