#include <stdio.h>
int  pop();
int push(int);
int d[11],top,n,i;
int main(){
  while(scanf("%d",&n)!=EOF){
  
      if(n==0){
	pop();
        printf("%d\n",d[top+1]);
	}
      else{
        d[i]=push(n);
      }
    
  }
  
  return 0;
}
int push(int x){
  top++;
  d[top]=x;
  return d[top];
}
int pop(){
  top--;
  return d[top+1];
}