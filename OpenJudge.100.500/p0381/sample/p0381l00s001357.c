#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	char tmp[1000];

	int pattern[10000];
	int cnt=0;
	//1???????¶??????????????????§??????????¨??????°????????\???
	while (fgets(tmp, sizeof(tmp), stdin)) {
		//??????
		int num = atoi(strtok(tmp, " "));
		int sum = atoi(strtok(NULL, " "));
		if (num == 0 && sum == 0)break;

		int i;
		for (i = 1; i < num; i++) {
			
			//1????????¨?????¨????????§???????¶??????????
			//2??????????¶???????????????°???????¨??????????????????¨??????????????\?????§????????°???????????????????????§??????
			//5,9??????1+5=6 >= 9-4 
			//2?????????2+4=6 >= 9-3
			//3?????????num???i??¨?????¶?????§??????
			if ( i + num>=sum-(num-1) ) {
				//???????????£????????§???????????????????????????
				num--;
				//????????????
				pattern[cnt]++;
			}
		}
		cnt++;
	}
	//??????????????°????????????????????????
	int k;
	for (k = 0; k < cnt; k++) {
		printf("%d\n",pattern[k]);
	}

	return 0;
}