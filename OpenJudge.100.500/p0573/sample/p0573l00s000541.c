
#include <stdio.h>

int main(){
	char s[5];
	int i, j, cnt;

	scanf("%s", s);

	for(i=0; i<4; i++){
		cnt=0;
		for(j=0; j<4; j++){
			if(s[i] == s[j])
				cnt++;
		}

		if(cnt != 2){
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");

	return 0;
}