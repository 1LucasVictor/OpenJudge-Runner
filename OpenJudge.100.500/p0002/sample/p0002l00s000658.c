#include<stdio.h>
#define rep2(i,n) rep3(i,0,n)
#define rep3(i,j,n) for((i)=(j) ; (i)<(n) ; (i)++)
#define pl(format,var) p(format "\n",var)
#define p(format,var) printf(format,var)
#define asizeof(array) (sizeof(array)/sizeof(array[0]))

int main(){
	int i,j,k,n;
	char line[80];
	int a,b,c;
	
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &n);
	
	rep2(i,n){
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d %d %d", &a, &b, &c);
		a = a*a;
		b = b*b;
		c = c*c;
		if(a==b+c || b==a+c || c==b+a)
			printf("YES\n");
		else
			printf("NO\n");
	}

  return 0;
}