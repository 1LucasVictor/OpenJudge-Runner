#include<stdio.h>
#include<string.h>

int main(void)
{
	int i,j,k,l,s,n,x;
	int length;
	char card[201],shuffle1[201],shuffle2[201];

	while(1){
		scanf("%s",card);
		if(card[0] == '-')break;
		scanf("%d",&n);
		for(i = 0;i < n;i++){
			scanf("%d",&x);
                        length = strlen(card);
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
		printf("%s\n",card);
	}
	return 0;
}