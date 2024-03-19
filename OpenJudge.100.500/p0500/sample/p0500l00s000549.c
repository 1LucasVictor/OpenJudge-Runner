#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
int compare(const void *a,const void *b){
    if(*(int *)a>*(int *)b)
        return 1;
        return -1;
}
int main()
{   int n,m; 
    scanf("%d%d",&n,&m);
    if(n<m){
        printf("-1");
        return 0;
    }
    int s[m],c[m];
    for(int i=0;i<m;i++){
        scanf("%d%d",&s[i],&c[i]);
        if(s[i]==1&&c[i]==0){
            printf("-1");
            return 0;
        }
    }
    for(int i=0;i<pow(10,n);i++){
        if(i<pow(10,n-1)){
            continue;
        }
        char d[4]={'\n'};
        sprintf(d,"%d",i);
        //printf("%s\n",d);
        for(int j=0;j<m;j++){
            if(d[s[j]-1]-'0'!=c[j])
            break;
            if(j==m-1){
                printf("%d",i);
                return 0;
            }
        }
    }
    printf("-1");

    return 0;
}
