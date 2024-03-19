#include<stdio.h>

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int arr[3];
	int n= 3;
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	int cc, d, t;
 
	  for (cc = 0 ; cc < ( n - 1 ); cc++)
	  {
		for (d = 0 ; d < n - cc - 1; d++)
		{
		  if (arr[d] > arr[d+1])
		  {
		    t         = arr[d];
		    arr[d]   = arr[d+1];
		    arr[d+1] = t;
		  }
		}
	  }
	a = arr[0];
	b = arr[1];
	c = arr[2];
	if(a==5 && b==5 && c==7){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}