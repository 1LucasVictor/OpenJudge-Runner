#include <stdio.h>

int main(){
	int a, b, s1, s2, s3;
	scanf("%i %i", &a, &b);
	s1=a+b;
	s2=a-b;
	s3=a*b;
	if(s1>=s2 && s1>=s3)
		printf("%i\n", s1);
	else if(s2>=s1 && s2>=s3)
		printf("%i\n", s2);
	else
		printf("%i\n", s3);	
}
