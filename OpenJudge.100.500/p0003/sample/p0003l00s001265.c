#include <stdio.h>

double sishagonyu(double num)	{
	
	//int num2;
	
	if (num == 0) return num;
	
	if (num > 0) { 
		num += 0.0005;
	} else {
		num -= 0.0005;
	}
	num = (double)(int)(num * 1000) / 1000;
	//	num *= 1000;
	//	num2 = (int)num;
	//	num = num2;
	//	num /= 1000;
	
	return num;
}

int main() {
	
	//printf("%.3lf", sishagonyu((double)-0.0015));
	
	
	double a, b, c, d, e, f;
	double x, y;
	
	double n = 0, m = 0, j = 0, h = 0, i = 0;
	
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		
		//if (scanf("%lf %lf %lf %lf %lf %f", &a, &b, &c, &d, &e, &f) == EOF) break;
		
		//printf("%f %f %f\n%f %f %f\n", a, b, c, d, e, f);	//input
		
		n = a / d;
		
		j = d * n;
		h = e * n;
		i = f * n;
		
		//printf("%f %f %f\n%f %f %f\t\t%f\n", a, b, c, j, h, i, n);
		
		m = b - h;
		y = c - i;
		//printf("%f %f\n", m, y);
		
		if(y != 0) y /= m;
		//printf("%f\n", y);
		
		i = c - (b * y);
		x = i / a;
		
		//printf("x = %f, y = %f\n", x, y);
		
		x = sishagonyu(x);
		y = sishagonyu(y);
		
		//printf("%f %f\n", x, y);
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}

//1 2 3 4 5 6
//-1.000 2.000

//2 -1 -2 -1 -1 -5
//1.000 4.000

//2 -1 -3 1 -1 -3
//0.000 3.000

// 2 -1 -3 -9 9 27
// 0.000 3.000