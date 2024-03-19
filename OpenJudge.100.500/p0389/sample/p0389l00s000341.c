#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n,i,j,k,shuffle_n,count,sum,length;
	char input[201];
	char tmp[201];
	char output[400][201];
	for(i=0;;i++){
		scanf("%s",input);
		if(input[0] == '-' && input[1] == '\0'){
			count = i;
			break;
		}
		length = 0;
		for(j=0;;j++){
			if(input[j] == '\0'){
				length = j;
				break;
			}
		}
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d",&shuffle_n);
			for(k=0;k<shuffle_n;k++){
				tmp[k] = input[k];
			}
			for(k=0;k<(length-shuffle_n);k++){
				input[k] = input[shuffle_n+k];
			}
			for(k=0;k<shuffle_n;k++){
				input[length-shuffle_n+k] = tmp[k];
			}
		}
		for(j=0;j<length;j++)
			output[i][j] = input[j];
	}
	for(i=0;i<count;i++){
		printf("%s\n",output[i]);
	}
return 0;
}
