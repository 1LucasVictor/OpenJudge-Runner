#include <stdio.h>

int count[10000];
int main(void)
{
	int i=0,j,n[10000],kosu=0,yakusuu,z;
	
	//入力(EOF)までCtr+Zまで
	while (scanf("%d", &n[i]) != EOF){
		i++;
		kosu++;
	}
	
	//全ての数値を確認するfor
	for (i=0; i<kosu; i++){
		
		//素数判定開始
		for (z=1; z<=n[i]; z++){
			
			yakusuu = 0;
			for (j=1; j<=z; j++){
				if (z%j == 0) yakusuu++;
			}
			if (yakusuu == 2){
				count[i]++;//素数としてカウント
			}
			
		}//探索終了
		printf("%d\n", count[i]);
	}
	
	return 0;
}