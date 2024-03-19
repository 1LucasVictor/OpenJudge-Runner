#include <stdio.h>
#include <string.h>

#define N 200001

int main(void)
{
	int i,length,count=0;
	char str_s[N],str_t[N];

	scanf("%s",str_s);
	scanf("%s",str_t);

	length = strlen(str_s);

	for(i=0;i<length;i++){
		if(str_s[i]!=str_t[i]){
			count++;
		}
	}

	printf("%d\n",count);

	return 0;
}
