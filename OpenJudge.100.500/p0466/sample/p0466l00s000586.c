#include<stdio.h>
#define N 100
int main(void){
  	int j,F = 1;
	char s[N],s_n[N];
  
  	scanf("%s",&s);
  	//printf("s = %s\n",s); //OK 
  	
 	scanf("%s",&s_n);
  
  	//check(&s);
  	for(j = 0; s[j] != '\0';j++){
      	//printf("s = %c, s_n = %c\n",s[j],s_n[j]);
     	if(s[j] != s_n[j]){
          	printf("No\n");
          	F = 0;
          	break;
        }     
    }
  	if(F)
      printf("Yes\n");
  	
  	return 0;
}