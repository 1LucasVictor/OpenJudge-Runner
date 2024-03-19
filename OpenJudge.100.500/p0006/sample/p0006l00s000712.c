#include <stdio.h>
#define DEBT 100000
#define INTEREST 0.05
#define ROUNDDEV 1000
int main(void){
    int w,i;
    long int result = DEBT;
    scanf("%d",&w);
    for(i=0;i<w;i++){
        result*=(INTEREST+1.0);
        //printf("R*0.9=%ld\n",ROUNDDEV-ROUNDDEV/10);
        //printf("r+R*0.9=%ld\n",result+(ROUNDDEV-ROUNDDEV/10));
        //printf("(r+R*0.9)/R=%ld\n",(result+(ROUNDDEV-ROUNDDEV/10))/ROUNDDEV);
        //printf("((r+R*0.9)/R)*R=%ld\n",((result+(ROUNDDEV-ROUNDDEV/10))/ROUNDDEV)*ROUNDDEV);
        if(result%ROUNDDEV!=0){
            result+=ROUNDDEV-(result%ROUNDDEV);
        }
        //result=((result+(ROUNDDEV-ROUNDDEV/10))/ROUNDDEV)*ROUNDDEV;
        //printf("r=%ld\n",result);
    }
    printf("%ld\n",result);
    
    return 0;
}