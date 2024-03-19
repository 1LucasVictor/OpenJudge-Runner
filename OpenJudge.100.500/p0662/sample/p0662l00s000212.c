#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int main(){
    int a,b,c,d,ans;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a<c){
        if(b<d){
            ans=MAX(b-c,0);
        }else{
            ans=d-c;
        }
    }else{
        if(b<d){
            ans=b-a;
        }else{
            ans=MAX(d-a,0);
        }
    }
    printf("%d\n",ans);
    return 0;
}
