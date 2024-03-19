#include<stdio.h>
#include<string.h>

int main(void){
	char s[10],t[11];
	int i=0,j=0,k=0,flag=0;

	scanf("%s",s);
	scanf("%s",t);

	while(s[i]!=0){
		i++;
	}
	if( i<=1 || i >10 ){
		flag++;
	}

	while(t[j]!=0){
		j++;
	}
	if( j<1 || j >11 ){
		flag++;
	}

	while(s[k]!=0){
		if(s[k]!=t[k]){
			flag++;
		}
		k++;
	}

	if((i+1)==j && flag==0){
		printf("Yes");
	}else{
		printf("No");
	}

	return 0;
}