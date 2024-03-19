#include<stdio.h>
#include<stdlib.h>

int main(){

  int i=0,num,b[10000];
  char a[10000];
  
  while( (scanf("%s",a)) != EOF){

    if(a[0] > '0' && a[0] < '9'){
    

      b[i] = atoi(a);
      i++;
    }

    else if(a[0] == '+'){
      b[i-2] = b[i-2] + b[i-1];
      i--;
    
    }

    
    else if(a[0] == '-'){
      b[i-2] = b[i-2] - b[i-1];
      i--;
    }

    
    else if(a[0] == '*'){
   
      b[i-2] = b[i-2] * b[i-1];
      i--;
      
    }

    
    else if(a[0] == '/'){
      b[i-2] = b[i-2] / b[i-1];
      i--;
    }
  }
  
  printf("%d\n",b[i-1]);




  return 0;
}

