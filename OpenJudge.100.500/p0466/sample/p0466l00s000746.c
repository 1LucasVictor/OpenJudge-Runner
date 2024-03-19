#include<stdio.h>
#include<string.h>
int main()
{
	char a[12],b[12];
	scanf("%s %s",a,b);
  int na=strlen(a);
  int nb=strlen(b);
  int i,k=0;
  if(na+1==nb){
    for(i=0;i<na;i++){
      if(a[i]!=b[i]){
        k=1;
        break;
      }
    }
  }
  else{
    k=1;
  }
  if(k==1){
    printf("No");
  }
  else{
  printf("Yes");
  }
	return 0;
}