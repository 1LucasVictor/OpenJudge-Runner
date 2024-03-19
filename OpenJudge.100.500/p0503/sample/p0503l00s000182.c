#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define BUFSIZE 200000
int n;
int hoge[BUFSIZE]={0};
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
void survey(int A){
    qsort(hoge,n,sizeof(int),compare_int);
    if(A==n-1){
        printf("YES");
        exit(0);
     }    
    if(hoge[A]==hoge[A+1]){
        printf("NO");
        exit(0);
    }
    survey(A+1);    
}
int main(void){
    scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&hoge[i]);
    }
    survey(0);
 }