#include<stdio.h>
int main(void)
{
	char s[10];
	char t[11];
	int m=0;
	int n=0;
	int x=0;
	scanf("%s",s);
	scanf("%s",t);
		
	while(s[n])
	n++; 
	while(t[m])
	m++;
	
	for(int i=0; i<n; i++){
		if(s[i] == t[i])
		 x++;
	}
	
	if(n==m)
	printf("No");
	
	
	else if(n==x&&n!=m)
	printf("Yes");
	
	else
	printf("No");
	
	return 0;
}
