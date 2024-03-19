#include <stdio.h>
	int main(){
		char stat[5];
		scanf("%s", stat);
		if (stat[0] == stat[1] && stat[1] == stat[2] && stat[0] == stat[2]){
			printf("No");
		} else {
			printf ("Yes");
		}
		return 0;
	}