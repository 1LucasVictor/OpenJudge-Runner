#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[200000];
    char t[200000];
    int i,cnt,len1,len2;
    cnt = 0;
	if(scanf("%s %s", s, t) < 2) {
      return 0;
    }
 	len1 = strlen(s);
 	len2 = strlen(t);
    if(len1 != len2){
        return 0;
    }
    for(i=0; i < len1; i++){
		if(!(s[i]>= 'a') && (s[i]<='z')){
          return 0;
        }
		if(!(t[i]>= 'a') && (t[i]<='z')){
          return 0;
        }
        if(s[i] != t[i]){
            cnt = cnt+1;
        }
    }
    printf("%d\n",cnt);
    return 0;
}