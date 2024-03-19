#include <stdio.h>

int main(){

    
    int a,b,ans[100],i,j;
    char op;
    i=0;
    
    while(op != '?'){     
 	  scanf("%d %c %d",&a,&op,&b);
 	  
 	  if (op=='+'){
		  ans[i]=a+b;
	  }else if(op=='-'){
		  ans[i]=a-b;
	  }else if(op=='*'){
		  ans[i]=a*b;
	  }else if(op=='/'){
		  ans[i]=a/b;
	  }
 	  i++;
    }
 	  
    for (j=0;j<i-1;j++){
		printf("%d\n",ans[j]);
    }
    
	return 0;
}