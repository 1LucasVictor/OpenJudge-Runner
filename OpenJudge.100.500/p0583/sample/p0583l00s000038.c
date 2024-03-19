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
	int qTop = 0,cnt = 0;
	int queue[100007] = { 0 };
	char s[200003];

	scanf("%d",&n);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	scanf("%s", s);
	
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
		for (int i = b - 1; i < d; ++i)
		{
		  if(s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.'){
		    puts("Yes");
		    return 0;
		  }
		}
		puts("No");
	}
	return 0;
}
