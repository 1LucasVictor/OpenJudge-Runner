#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define BUFSIZE 200000
int n;
int hoge[BUFSIZE]={0};
int survey(int A){
    for(int i=0;i<n;i++){    
        if(hoge[A]==hoge[i] && A != i){
            printf("NO");
            exit(0);
        }
    if(A==n-1){
        printf("YES");
        exit(0);
    }
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