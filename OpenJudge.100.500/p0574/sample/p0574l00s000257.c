#include <stdio.h>
#include <math.h>

int main(void)
{
	int number;   // 標準入力からの 4 桁の整数を格納
  	int each[4];  // 各桁の数字を保存
  	int i, j;
  
  	scanf("%d", &number);  // 4 桁の整数を取得
  	for( i=3; i>-1; i-- ){
    	each[i] = number/pow(10, i);
      	number = number - pow(10, i)*each[i];
    }
  
  	for( i=0; i<3; i++ ){
    	for( j=i+1; j<4; j++ ){
        	if( each[i]==each[j] ){
				printf("Bad\n");  // 入力しづらい
              	return 0;
            }
        }
    }
  	
  	printf("Good\n");  // 入力しやすい
  
  	return 0;
}