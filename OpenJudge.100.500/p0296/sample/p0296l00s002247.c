#include <stdio.h>


int top=0;
int s[200];

void push(int x){
  top++;
  s[top]=x;
}

int pop(){
  top--;
  return s[top+1];
}
	



int main(){

  int i,j,k,s1,s2,sum;
  char a[8];

  for(i=0; i<200; i++){
    for(k=0; k<8; k++){
      scanf("%c",&a[k]);
      if(a[k]==' '||a[k]=='\n')
	break;
    }

    

    switch(a[0]){
    case '+':
      s1=pop();
      s2=pop();
      push(s1+s2);
      break;

    case '-':
      s1=pop();
      s2=pop();
      push(s2-s1);
      break;

    case '*':
      s1=pop();
      s2=pop();
      push(s1*s2);
      break;

    default:
      sum=0;
      for(j=0; j<8; j++){
	if(a[j]==' ')
	  break;
	sum=sum*10+(a[j]-48);
      }
      push(sum);
      break;
    }
    if(a[k]=='\n')
      break;

  }
  printf("%d\n",s[1])  ;    
  return 0;
}
    
    
    


