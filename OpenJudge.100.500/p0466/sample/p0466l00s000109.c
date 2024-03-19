#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define F(i,a,n) for(int i=a; i<n; i++)
#define INF 100000000000 // long only

int main(){
	char s[100], t[100];
    scanf("%s%s",s,t);
    if(strncmp(s,t,strlen(s))==0)printf("Yes\n");
    else printf("No\n");
    return 0;

}