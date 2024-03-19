#include <stdio.h>

int main(){
	char S[5];
	char s,s2;
	int cou=0,cou2=0,flag=0;;
	scanf("%s",S);
	s=S[0];
	for(int i=0;i<4;i++){
		if(s!=S[i] && flag==0){
			s2=S[i];
			flag++;
		}
		if(s==S[i])cou++;
		else if(s2==S[i])cou2++;
	}

	if(cou==2 && cou2 ==2)printf("Yes\n");
	else printf("No\n");
	return 0;
}