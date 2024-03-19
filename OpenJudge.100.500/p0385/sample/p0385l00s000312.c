#include <stdio.h>

int answer(char ch[])
{
	int sum = 0;
	int i;
	
	for(i=0;;i++){
		if(ch[i] == 0){
			break;
		}
		sum += ((int)ch[i]-48);
	}
	
	return sum;
}
int main()
{
	char ch[1001];
	
	while(1){
	
		scanf("%s",ch);
		
		if(answer(ch) == 0){
			break;
		}
	
		printf("%d\n",answer(ch));

	}
	return 0;
}