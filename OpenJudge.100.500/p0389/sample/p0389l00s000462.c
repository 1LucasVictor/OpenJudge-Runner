#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str[200];
	char te[200];
	int m;
	char temp = '-';
	int i, j;
	int num;
	int h;
	
	while(1){
		scanf("%s", str);

		if(str[0] == temp){
			break;
		}
		else{
			scanf("%d", &h);
			for(j=0; j<h; j++){
				scanf("%d", &num);
/*				printf("b:%s\n", str);*/

				strcpy(te, str);
				for(i=num; i<strlen(str); i++){
					str[i-num] = te[i];
				}
				for(i=0; i<num; i++){
					str[i + strlen(str) - num] = te[i];
				}
/*				printf("a:%s\n", str);*/
			}
			printf("%s\n", str);
		}
	}
	return 0;

}
