#include <stdio.h>

#define COL 3 //列
#define LINE 2 //行

//連立方程式1つとxyの答えを持つ
typedef struct{
	double data[LINE][COL];
	double x_answer;
	double y_answer;
} Question;


int main(){
	Question q[10];
	int q_num = 0;//問題数
	int i,j,k = 0;
	int d;

	//入力の最後まで処理
	while( q_num < 2 ){
		for(i=0; i<LINE; i++){
			for(j=0; j<COL; j++){
				scanf("%lf",&q[q_num].data[i][j]);
			}
		}
		q_num++;
	}

	//問題を解く処理
	for(i=0; i<q_num; i++){
		//前進消去
		//(2)' = (2)-(1)*a10/a00
		for(j=COL-1; j>=0; j--){
			q[i].data[1][j] -= q[i].data[0][j] * q[i].data[1][0] / q[i].data[0][0];
		}
		
		q[i].y_answer =  q[i].data[1][2] / q[i].data[1][1] ;

		q[i].x_answer =  (q[i].data[0][2] - q[i].data[0][1] * q[i].y_answer) / q[i].data[0][0] ;

	}

	for(k=0; k<q_num; k++){
		printf("%.3lf %.3lf\n",q[k].x_answer,q[k].y_answer);
	}


	return 0;
}