#include <stdio.h>
int main(void){
    int line,i,a,b,c;
    scanf("%d",&line);
    for (i=0;i<line;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a) )
             printf("YES\n");
        else{
            printf("NO\n");
        }
        
    }
}