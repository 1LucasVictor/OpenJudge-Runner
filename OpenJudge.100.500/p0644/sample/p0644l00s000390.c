#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define REP(i,n) for(i=0;i<n;i++)
#define ll long long

int main(void){
    int i;
    char s[3];
    REP(i,3){
        scanf("%c",&s[i]);
    }
    
    int ctr=0;
    if(s[0]=='1') ctr++;
    if(s[1]=='1') ctr++;
    if(s[2]=='1') ctr++;

    printf("%d",ctr);
    
    return 0;
}