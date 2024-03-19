#include<stdio.h>
int main(){
  int i,j,h,a[1001]={};
  char num[1001]={};
  for(i=0;i<10000;i++){
    scanf("%s",num);
    if(num[0]=='0') break;
    for(j=0;j<1001;j++){
      a[i]+=num[j]-'0';
       if(num[j+1]=='\0') break;
    }
  }
  for(h=0;h<i;h++){
    printf("%d\n",a[h]);
  }
  return 0;
}
