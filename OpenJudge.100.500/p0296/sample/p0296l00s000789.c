#include<stdio.h>
int main(){
  char c,e;
  int a[100],b,d,i,f=0;
  for(i=0;i<2;i++){
    scanf("%d%d %c%c",&b,&d,&c,&e);  
  if(c=='+'){
    a[i]=b+d;
  }
  else if(c=='-')a[i]=b-d;
  else a[i]==b*d;
  f++;
   if(e=='\n')break;
  
  }
    if(i>2){
      scanf(" %c",&c);
 if(c=='+')a[i]=a[0]+a[1];
  else if(c=='-')a[i]=a[0]-a[1];
  else a[i]==a[0]*a[1];
    } 
  
    printf("%d\n",a[f-1]);
    return 0;
	 
}
    