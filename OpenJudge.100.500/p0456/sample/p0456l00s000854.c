#include <stdio.h>
#include <string.h>

int main(){
	
	char a[20000]={0};
    char b[20000]={0};
  	int i;
  	int n = 0;
	if(scanf("%s",a) == -1){
    	return 0;
    }
	if(scanf("%s",b) == -1){
    	return 0;
    }
  	for(i=0;i<20000;i++){
        if(a[i]=='\0'&&b[i]=='\0'){
      break;
    }else if(a[i]=='\0'||b[i]=='\0'){
        return 0;
        }else{
     
        }
      
	if(strncmp(&a[i],&b[i],1)!=0){
      n = n+1;
    }

    }
  
	printf("%d\n",n);
	
	return 0;
}