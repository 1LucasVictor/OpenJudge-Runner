#include<stdio.h>
#include<string.h>

int c[100];

int main(void)
{
	int i;
	int j;
	j = 0;
	while(scanf("%d", &i) != EOF){
		if(i != 0){
			c[j] = i;
			j++;
		}
		else if(i == 0){
			printf("%d\n",c[j - 1]);
			j--;
		}
	}
	
	return 0;
}