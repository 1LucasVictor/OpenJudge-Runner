#include <stdio.h>
#include <string.h>

int main(){
	
	char a[20000];
    char b[20000];
  	int i;
  	int n = 0;
	scanf("%s",a);
  	scanf("%s",b);
  	for(i=0;i<20000;i++){
        if(a[i]=='\0'){
      break;
    }
      
	if(strncmp(&a[i],&b[i],1)!=0){
      n++;
    }

    }
  
	printf("%d\n",n);
	
	return 0;
}