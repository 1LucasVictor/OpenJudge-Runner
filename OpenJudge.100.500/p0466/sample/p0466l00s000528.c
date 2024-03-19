#include<stdio.h>
#include<string.h>
 
int main(){
	char s[10];
    char t[11];
    int i;
    
    scanf("%s", s);
    scanf("%s", t);
    for(i=0; i<strlen(s); i++){
    if(s[i]!=t[i]){
			printf("No");
            return 0;
    	}	
    }
    printf("Yes");
	return 0;    
}