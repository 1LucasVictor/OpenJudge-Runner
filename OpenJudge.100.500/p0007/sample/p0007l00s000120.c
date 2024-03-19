#include <stdio.h>

int main(){
	int No1 = 0; 
	int No2 = 0; 
	int No3 = 0; 
	int No4 = 0;
	int Solns = 0;
	int Sum = 0;
	
	while(scanf("%d", &Sum) != EOF) {
		Solns = 0;
		for (No1 = 0; No1 < 10; No1++) {
			for (No2 = 0; No2 < 10; No2++) {
				for (No3 = 0; No3 < 10; No3++) {
					for (No4 = 0; No4 < 10; No4++) {
						if (No1 + No2 + No3 + No4 == Sum) {
							Solns++;
						}
					}
				}
			}
		}
		printf("%d\n", Solns);
	}
	return 0;
}