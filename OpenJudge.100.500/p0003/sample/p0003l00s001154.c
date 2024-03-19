#include <stdio.h>

int main(){
	int a, b, c, d, e, f;
	float det;
	float inv_mat[2][2];
	float x, y;

	while( scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF ){
		/*Calc Inverse Matrix*/
		det = a*e - b*d;
		inv_mat[0][0] = e/det;
		inv_mat[1][1] = a/det;
		inv_mat[0][1] = -b/det;
		inv_mat[1][0] = -d/det;
		/*Calc Answer x, y*/
		x = inv_mat[0][0]*c + inv_mat[0][1]*f;
		y = inv_mat[1][0]*c + inv_mat[1][1]*f;
		/*Output*/
		printf("%.3f %.3f\n", x, y);
	}

	return 0;
}