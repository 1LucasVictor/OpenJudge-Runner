#include<stdio.h>

int main(){
	char s1[20], s2[20];
	scanf("%s", s1);
	int i = 0, j = 0;
	while(s1[i] != '\0')
		i++;
	scanf("%s", s2);
	for(j = 0; j < i; j++){
		if(s1[j] != s2[j])
			break;
	}
	if(j == i)
		printf("Yes");
	else
		printf("No");

	return 0;
}