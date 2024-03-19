#include<stdio.h>
int main(){
  int a[1000],b[1000],i,z=0;
  char op[1000];
  for(i=0;1;i++){
    scanf("%d%s%d",&a[i],&op[i],&b[i]);
    if(op[i]=='?')break;
    z++;
  }
  for(i=0;i<=z;i++){
    if(op[i]=='-')printf("%d\n",a[i]-b[i]);
    if(op[i]=='*')printf("%d\n",a[i]*b[i]);
    if(op[i]=='/')printf("%d\n",a[i]/b[i]);
    if(op[i]=='+')printf("%d\n",a[i]+b[i]);
  }
  return 0;
}