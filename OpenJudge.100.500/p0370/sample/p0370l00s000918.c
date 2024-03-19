#include <stdio.h>
int main(void)
{
    int a[20000], b[20000] ,c ,i ,count;
    char op[20000];
    
    for(i=0;i<20000;i++){
    	scanf("%d %c %d",&a[i] ,&op[i] ,&b[i]);
    	if(op[i] == '?'){
    		break;
    	}
    }
   
   count = i;
   
   for(i=0;i<count;i++){
   		if(op[i] == '+'){
    		c = a[i] + b[i];
    	}
    	if(op[i] == '-'){
    		c = a[i] - b[i];
    	}
    	if(op[i] == '*'){
    		c = a[i] * b[i];
    	}if(op[i] == '/'){
    		c = a[i] / b[i];
    	}
    	printf("%d\n",c);
   }
    
    return 0;
}