#include <stdio.h>

int main(void){

	int NumOfWeeks;
	int CurrentDebt = 100000;
	scanf("%d", &NumOfWeeks);

	int i;
	for(i = 0; i < NumOfWeeks; i++){
		CurrentDebt = (CurrentDebt/20 + CurrentDebt + 999)/1000*1000;
	}
	
	printf("%d\n", CurrentDebt);
	return 0;
}