#include<stdio.h>
#include<string.h>
#define MAX 201

int main(){
char str[MAX];
char temp[MAX];
int n,i,x,y,j;

while(1){
 scanf("%s",str);
 if(strcmp(str,"-")==0)break;
 y=strlen(str);
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&x);
  for(j=0;j<x;j++)temp[j]=str[j];
  for(j=x;j<y;j++)str[j-x]=str[j];
  for(j=y-x;j<y;j++)str[j]=temp[j-(y-x)];
 }
 printf("%s\n",str);
}

return 0;
}
