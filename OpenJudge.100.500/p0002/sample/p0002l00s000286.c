//Triangle
#include<stdio.h>

int main(void) {
    
    int i,a,b,c,n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&c);
        
        if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
       
    return 0;
}