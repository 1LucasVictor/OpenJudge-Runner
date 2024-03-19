#include<stdio.h>
#include<limits.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int queueA[n][m];
	int queueB[m];

	//queueA
	for(int i=0;i<n;i++){
		char ANums[n];//数字は一桁なので要素数n
		scanf("\n%[^\n]",ANums);
		//文字列から数字を取り出す
		int digitcount=0;
		for(int j=0;j<m;j++){
			//printf("i=%d\n",j);
			//次の数値に
			while(ANums[digitcount]==' '){
				digitcount++;
			}
			//数値を取り出す
			queueA[i][j]=atoi(&ANums[digitcount]);

			//ラストでなければ次の空白に
			if(j!=m-1){
				while(ANums[digitcount]!=' '){
					digitcount++;
				}
			}
		}

	}
	/*
	printf("\n@@@@@\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",queueA[i][j]);
		}
		puts("");
	}
	printf("\n@@@@@\n");
	*/

	//queueB
	for(int i=0;i<m;i++){
		scanf("%d",&queueB[i]);
	}

	//計算
	for(int i=0;i<n;i++){
		int sum=0;
		for(int count=0;count<m;count++){
			sum+=queueA[i][count]*queueB[count];
		}
		printf("%d\n",sum);
	}



	return 0;
}

