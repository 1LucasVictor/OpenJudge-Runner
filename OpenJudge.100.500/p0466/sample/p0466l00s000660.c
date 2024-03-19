#include<stdio.h>
int main(void)
{
	char s[10];
	char t[11];
	int m=0;
	int n=0;
	scanf("%s",&s);
	scanf("%s",&t);
		
	while(s[n])
	n++; 
	
	for(int i=0; i<n; i++){
		if(s[i] == t[i])
		 m++;
	}
	
	if(n==m)
	printf("Yes");
	
	else
	printf("No");
	
	
	return 0;
}
