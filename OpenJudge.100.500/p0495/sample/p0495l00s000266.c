#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int compare(const void *a,const void *b){
    if(*(int *)a>*(int *)b)return 1;
    return -1;
}
long long MAX(long long a,long long b){
    return a>b?a:b;
}
int main()
{   char s[4];
    scanf("%s",s);
    if(s[0]==s[1]&&s[1]==s[2]){
        printf("No");
    }else{
        printf("Yes");
    }
    
    
    return 0;
}
