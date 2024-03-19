#include <stdio.h>
#include <stdlib.h>

int j=0;
int pop(void);
int stack[100];

int main(){
  char a[199];
  int i=0;
   int k=0;
   int sum=0,sub1,sub=0,multi=1;
  char *A;

  scanf("%[^\n]",a);
 
  
  while(1){
     if(a[i]!=' '){
  
       if(a[i]=='\0')break;
     }

    if(a[i]=='+'){
   	sum+=pop();
	
	sum+=pop();

	j++;
	stack[j]=sum;

	sum=0;
       }
    else if(a[i]=='-'){
    	sub1=pop();
	sub=pop();
	sub-=sub1;
	j++;
	stack[j]=sub;

	sub=0;
     }
    else if(a[i]=='*'){
      multi*=pop();
      multi*=pop();
      j++;
      stack[j]=multi;
   
      multi=0;
    }
    else{
      if(a[i]!=' '){
	j++;
	A=&a[i];

	stack[j]=atoi(A);

	while(1){
	  if(a[i+1]==' ')break;
	  i++;
	
	}
      }
     
   
      }
    i++;
  }

  
 
   printf("%d\n",stack[1]);
 
 
   return 0;
}

int pop(){

  j--;
  return stack[j+1];
}