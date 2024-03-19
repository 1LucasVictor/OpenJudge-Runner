#include <stdio.h>
int main() 
{ signed long h,n; 
signed short temp; 
scanf("%ld%ld",&h,&n); 
while(n>0) { 
	scanf("%hd",&temp); 
	h = h - temp;
	n--; 
} 
if(h>0) { 
	printf("No"); 
}
else { printf("Yes"); 
} return 0; 
}
