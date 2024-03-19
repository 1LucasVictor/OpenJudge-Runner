#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int n = 0, count = 0;
    double d = 0;
    int *p;
    int **pp;
    int i,j;
    
    if (scanf("%d %lf", &n,&d) == 2){
    p = (int *)calloc(2,sizeof(int));
    if (p != NULL){
        for(i=0; i<n; i++){
        scanf("%d %d",&p[0], &p[1]);
        if (hypot(p[0],p[1]) <= d){
                    count++;
                }    
            }
        printf("%d\n",count);
        }
    }
    return 0;
}