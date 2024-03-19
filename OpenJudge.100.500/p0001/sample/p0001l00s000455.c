#include <stdio.h>
#include <math.h>

int main(){

	int a,b;

while(scanf("%d%d",&a,&b) != EOF){
 int d = log10(a+b);
printf("%d\n",d+1);
}

return 0;
}