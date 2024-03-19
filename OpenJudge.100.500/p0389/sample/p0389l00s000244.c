#include<stdio.h>
#include<string.h>

int main(void)
{
	int i,j,k,l;
	int s,n,x;
	int length;
	char card[402],shuffle1[201],shuffle2[201];

	while(1){
		scanf("%s",card);
		if(card[0] == '-')break;
		length = strlen(card);
		scanf("%d",&n);
		for(i = 0;i < n;i++){
			scanf("%d",&x);
			for(j = 0;j < x;j++){
				shuffle1[j] = card[j];
			}
			s = 0;
			for(k = x;k <= length;k++){
				shuffle2[s++] = card[k];
			}
			strcat(shuffle2,shuffle1);
			for(l = 0;l < length;l++){
				card[l] = shuffle2[l];
			}
		}
		for(i = 0;i < length;i++){
			printf("%c",card[i]);
		}
		printf("\n");
	}
	return 0;
}