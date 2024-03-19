#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
#define MOD 1000000007
typedef long long ll;

int main(){
	char str[5];
	scanf("%s", str);
	if((str[0] == str[1]) && (str[1] == str[2])) printf("No");
	else printf("Yes");
	return 0;
}
