#include<stdio.h>

int main(void)
{
    char str[1200];
	int i;
    
    scanf("%[^\n]", str);
	
	for(i=0; str[i]!='\0'; i++){
		if((str[i]>='A') && (str[i]<='Z')){
			str[i] += 32;}
			
		else if((str[i]>='a') && (str[i]<='z')){
			str[i] -= 32;}}
			
    
    printf("%s\n", str);
}
