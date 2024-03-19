/*
	submission # - User: herp_sy
	https://atcoder.jp/contests/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int main(int argc, char const *argv[])
{
	int n;
	int a,b,c,d;
	char s[200003];
	char sb[200007];
	bool flag = false;

	scanf("%d",&n);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	scanf("%s", s);
	sb[0] = '#';
	
	// check stone
	for (int i = 1; i < strlen(s); ++i)
	{
		if(s[i - 1] == '#' && s[i] == '#'){
			puts("No");
			return 0;
		}
	}
	
	if(c < d){
		puts("Yes");
		return 0;
	}
	else{
	  strcat(s,"#");
	  strcat(sb,s);
	  // puts(sb);
		for (int i = b; i <= d; ++i)
		{
		  if(sb[i - 1] == '.' && sb[i] == '.' && sb[i + 1] == '.'){
		    flag = true;
		  }
		}
		if(flag)  puts("Yes");
		else puts("No");
	}
	return 0;
}
