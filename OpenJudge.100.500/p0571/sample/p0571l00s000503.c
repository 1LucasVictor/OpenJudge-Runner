#include <stdio.h>

int main() {
	char ch;
        int n , a, b ;

        scanf("%d%d%d" , &n , &a , &b);

	if(1 > n || n > 20 || 1 > a || a > 50 || 1 > b || b > 50 ){

	}

	int r = a*n ;


	
	if (r > b) {
printf("%d\n",b);
}else {
printf("%d\n",r);
}

	
        return 0;
}