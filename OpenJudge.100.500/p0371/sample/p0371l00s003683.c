#include <stdio.h>
 
int main(void) {
 
	// ??°????????\???????????°?????????
	int num;
	scanf("%d", &num);
	int sequence[num];
 
	// ??\?????????????¨???????????????\??????
	for(int cnt = 0; cnt < num; cnt++) {
		
		scanf("%d", &sequence[cnt]);
		
	}
	
	// ????°????????????§??????????¨??????\???????????°
	int min = sequence[0];
	int max = sequence[0];
	long long sum = 0;
	
	// ????°????????????§??????????¨?????¨????
	for(int cnt = 0; cnt < num; cnt++) {
		
		if(min >= sequence[cnt]) {
			
			min = sequence[cnt];
		}
	
		if(max <= sequence[cnt]) {
			
			max = sequence[cnt];
		}
		
		sum += sequence[cnt];
	
	}
	
	// ???????????????
	printf("%d %d %d\n", min, max, sum);
	
 	return 0;
}