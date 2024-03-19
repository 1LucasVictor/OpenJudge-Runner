#include <stdio.h>
#define STOI(a) ((a-'1')+1)
#define SUM(a,b) (a+b)
int main(void){
    char x[1001];
    int res[1000]={0},su=0,n=0,i=0,j;
    while(1){
        n=0, su=0;
        scanf("%s",x);
        if(x[0]=='0' && x[1]==NULL) break;
        while(1){
            if (x[n] == NULL) break;
            su=SUM(su,STOI(x[n]));
            n++;
        }
        res[i]=su, i++;
    }
    for(j=0;j<i;j++) printf("%d\n",res[j]);
    return 0;
}
