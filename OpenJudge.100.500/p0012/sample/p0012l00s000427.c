#include <stdio.h>

int main(void)
{
	int train[100];	//列車の指示番号の個数
	int go_train[11] = {0};
	int i = 0;		//添字用1
	int j;			//添字用2
	int D = 1;		//判定用
	int tmp;
	int T = 0;			//Turn 順番
	
	while (scanf("%d", &train[i]) != EOF){	//入力の終わりまで実行(Ctrl + Z)
		i++;
	}
		
	while (D != 0){
		D = 0;
		for (j = 0; j < i; j++){
			if (train[j] == 0){
				T++;
				while (j < i){
					tmp = train[j - 1];
					go_train[tmp] = T;
					
					train[j - 1] = train[j + 1];
					j++;
				}
				i -= 2;
				D++;
			}
		}
	}
	
	for (T = 1; T < 11; T++){
		for (j = 0; j < 11 ; j++){
			if (go_train[j] == T){
				if (j == 0){
				}
				else {
					printf("%d\n", j);
				}
			}
		}
	}
	
	
	return (0);
}
