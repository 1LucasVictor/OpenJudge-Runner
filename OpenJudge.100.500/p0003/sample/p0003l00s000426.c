#include <stdio.h>

int main() {
	
	double a, b, c, d, e, f;	//scanf
	double x, y;							//ans
	int t, t2;
	
	double n = 0, m = 0, j = 0, h = 0, i = 0;						//temp
	
	while(1){
		
		if (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) == EOF) break;
		
		//printf("%lf %lf %lf\n%lf %lf %lf\n", a, b, c, d, e, f);	//input
		
		n = a / d;                                             //Xツづーツ堕オツつヲツつスツつ「
		j = d * n; h = e * n; i = f * n;
		
		//printf("%lf %lf %lf\n%lf %lf %lf\t\t%lf\n", a, b, c, j, h, i, n);
		
		m = b - h;
		y = c - i;
		//printf("%lf %lf\n", m, y);
		
		if(y != 0) y /= m;
		//printf("%lf\n", y);
		
		i = c - (b * y);
		x = i / a;
		
		//printf("x = %lf, y = %lf\n", x, y);
		
		if(x != 0) { if (x > 0) { x += 0.0005; } else { x -= 0.0005; } } else { x = 0; }
		if(y != 0) { if (y > 0) { y += 0.0005; } else { y -= 0.0005; } } else { y = 0; }
		
		
		//printf("x = %lf, y = %lf\n", x, y);
		
		x *= 1000;
		y *= 1000;
		
		t = (int)x;
		t2 = (int)y;
		
		//printf("x = %lf, y = %lf t = %d, t2 = %d\n", x, y, t, t2);
		
		x = t;
		y = t2;
		
		x /= 1000;
		y /= 1000;
		
		//printf("%lf %lf\n", x, y);
		printf("%.3lf %.3lf\n", x, y);
		
		//		Sample Input
		//		1 2 3 4 5 6
		//		2 -1 -2 -1 -1 -5
		//		Output for the Sample Input
		//			-1.000 2.000
		//			1.000 4.000
		//			Hint
		//			try it
		//			
		//			2 -1 -3 1 -1 -3
		//			2 -1 -3 -9 9 27
		//			output should be
		//			
		//			0.000 3.000
		//			0.000 3.000
	}
	return 0;
}