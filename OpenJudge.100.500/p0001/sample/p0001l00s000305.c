#include <stdio.h>
#include <math.h>
int main(void){
    int a,b,sum,count;
    double i;
    while(scanf("%d %d",&a,&b)!=EOF){
        sum=a+b;
        count=0;
        i=0.0;
        for(;;){
            if(sum%(int)pow(10.0,i)!=sum) count++;
            else break;
            i++;
        }
        printf("%d\n",count);
    }
    
    return 0;
}

