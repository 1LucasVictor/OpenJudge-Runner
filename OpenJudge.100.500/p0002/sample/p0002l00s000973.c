#include<stdio.h>
int main(void){
    int a,b,c,N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a*a==b*b+c*c){
            printf("YES\n");
        }
        if(b*b==a*a+c*c){
            printf("YES\n");
        }
        if(c*c==b*b+a*a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
        }
return 0;
}