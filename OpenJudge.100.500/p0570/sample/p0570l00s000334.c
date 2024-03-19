#include<stdio.h>

int main()
{
    int a,b,d,f;
    scanf("%d %d",&a,&b);
    if(a != b){

        if(a>b){
                f=0;
            for(d=1;d<=a;d++){
                if(abs(a-d) == abs(b-d)){
                    f=1;
                    break;
                }
            }
            if(f == 1){
            printf("%d",d);
            }
            else
                printf("IMPOSSIBLE");
        }
        else if(b>a){
            f=0;
            for(d=1;d<=b;d++){
                if(abs(a-d) == abs(b-d)){
                    f=1;
                    break;
                }
            }
            if(f == 1){
            printf("%d",d);
            }
            else
                printf("IMPOSSIBLE");
        }
    }

}
