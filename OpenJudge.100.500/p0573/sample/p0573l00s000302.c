#include<stdio.h>
 
int main(){
	char s[5];
	int count=0;
	scanf("%s",s);
	int i,j;
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			if(s[i]==s[j])
				count++;
		}
	}
	if(count==2)
		printf("Yes");
	else
		printf("No");
	return 0;
}
				
	