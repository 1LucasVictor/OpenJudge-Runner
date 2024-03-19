#include<stdio.h>

int main(){
	char s[5];
	scanf("%s",s);
	
	int i,j,a=0;
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			if(s[i]==s[j]){
				a++;
				break;
			}
			
		}
	}
	
	if(a==2)
		printf("Yes");
	else
		printf("No");
	return 0;
}

				