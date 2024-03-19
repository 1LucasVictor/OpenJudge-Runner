#include<stdio.h>
#include <string.h>
int main()
{
    char s[200000];
    char t[200000];
    int i,cnt,len;
    cnt = 0;
	if(scanf("%s %s", s, t) < 2) {
      exit(1);
    }
 	len = strlen(s);
    for(i=0; i < len; i++){
        if(s[i] != t[i]){
            cnt = cnt+1;
        }
    }
    printf("%d\n",cnt);
    return 0;
}