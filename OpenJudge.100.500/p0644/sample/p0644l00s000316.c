
#include <stdio.h>

int main(void){
	char s[3];
  int i=0;
  scanf("%s",s);
  
  int count = 0;
  for(i=0;i<3;i++){
	if(s[i] == '1'){
		count++;
    }
  }
	printf("%d",count);	
	
  
return 0;

}