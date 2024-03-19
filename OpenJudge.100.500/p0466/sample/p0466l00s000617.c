    #include <stdio.h>
     
    int main(void){
      	char s[11];
      	char t[12];
    	scanf("%s",s);
      	scanf("%s",t);
      
      	for(int i=0;i<11;i++){
          //printf("%d",t[]);
            if(s[i]=='\0'){
            	if(t[i+1]=='\0'){
                	printf("Yes");
                  	return 0;
                }
            }
        	if(s[i]!=t[i]){
            	printf("No");
              	return 0;
            }
        }
      
      	return 0;
    }