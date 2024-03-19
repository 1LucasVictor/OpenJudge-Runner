#include <stdio.h>
 
int main(void) {
	char str[100001];
	fgets(str,100001,stdin);
	unsigned long zero,one,ans,index;
	zero = 0;
	one = 0;
	for (index=0;index<100001;index++) {
		if (str[index]=='0') zero++;
		else if (str[index]=='1') one++;
		else break;
	}
	ans = ((zero<one)?zero:one)*2;
	printf("%ld\n",ans);
 
	return 0;
}