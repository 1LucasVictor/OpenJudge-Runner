#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(){
	//freopen("in.txt.txt","r",stdin);
	//freopen("out.txt.txt","w",stdout);
	int n;
	scanf("%d",&n);
	printf("%d",n%2==0 ? n/2 : (n+1)/2);
	return 0;
}