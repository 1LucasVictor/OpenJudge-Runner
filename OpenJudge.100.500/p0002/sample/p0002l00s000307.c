#include<stdio.h>



int main(){
    
    int N;
    scanf("%d",&N);
    int i;
    for(i=0;i<N;i++){
        int a, b, c;
        scanf("%d %d %d",&a, &b, &c);
        if(a<b){
            int tmp;
            tmp=a; a=b; b=tmp;
        }
        if(a<c){
            int tmp;
            tmp=a; a=c; c=tmp;
        }
        
        if(a*a==b*b+c*c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
            
    }
    
    return 0;
}