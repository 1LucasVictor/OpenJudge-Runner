#include <stdio.h>

int main(int argc, char const *argv[])
{
	char N[4];
	scanf("%s",N);
	int i;
	for(i=0;i<4;i++) {
		if (N[i+1]=='\0') {
			break;
		}
	}
	if (N[i]=='2' || N[i]=='4' ||N[i]=='5' ||N[i]=='7' ||N[i]=='9') {
		printf("hon\n");
	}else if(N[i]=='0' ||N[i]=='1' ||N[i]=='6' ||N[i]=='8') {
		printf("pon\n");
	}else{
		printf("bon\n");
	}

	return 0;
}
