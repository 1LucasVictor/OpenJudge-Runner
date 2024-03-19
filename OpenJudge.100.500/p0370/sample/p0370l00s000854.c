#include<stdio.h>
int main(){
  int a=0,b=0;
  char ex;
  while(a == 0){scanf("%d %c %d",&a,&ex,&b);
    if(ex == '+'){printf("%d\n",a+b);
      a = 0;}
    else if(ex == '-'){printf("%d\n",a-b); 
	a = 0;}
    else if(ex == '*'){printf("%d\n",a*b); 
	a = 0;}
    else if(ex == '/'){printf("%d\n",a/b);
        a = 0;}
    else if(ex == '?')break;}
    
    return 0;
   }