#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void){
	int n, m;
	int ret[3] = {-1, -1, -1};
	int flag = 0;
	int idx;

	scanf("%d %d", &n, &m);
	for(int i = 0; i < m; i++){
		int s, c;
		scanf("%d %d", &s, &c);

		if(ret[s-1] == -1 || ret[s-1] == c)
			ret[s-1] = c;
		else
			flag = 1; 
	}

	if((ret[0] == 0) || (ret[0] == -1 && ret[1] == 0)){
		flag = 1;
		if(ret[2] == 0){
			printf("-1");
			return 0;
		}

	}
	
	for(idx = 0; idx < n; idx++){
		if(ret[idx] == -1)
			ret[idx] = -1;
		else
			break;
	}

	for(; idx < n; idx++){
		if(ret[idx] == -1)
			ret[idx] = 0;
	}


	if(flag == 0){
		for(int i = 0; i < n; i++){
			if(ret[i] != -1)
				printf("%d", ret[i]);
		}
	} else {
		printf("-1");
	}






	return 0;
}