#include <stdio.h>
int main(void){
    int n, i;
    scanf("%d", &n);
    
    for(i=1; i<n+1; i++){
        if(i%3 == 0){
            printf(" %d", i);
        }else if(i%10 == 3){
            printf(" %d", i);  
        }else if(30<=i && i<40){
            printf(" %d", i);
        }else if(130<=i && i<140){
            printf(" %d", i);
        }else if(230<=i && i<240){
            printf(" %d", i);
        }else if(300<=i && i<400){
            printf(" %d", i);
        }else if(430<=i && i<440){
            printf(" %d", i);
        }else if(530<=i && i<540){
            printf(" %d", i);
        }else if(630<=i && i<640){
            printf(" %d", i);
        }else if(730<=i && i<740){
            printf(" %d", i);
        }else if(830<=i && i<840){
            printf(" %d", i);
        }else if(930<=i && i<940){
            printf(" %d", i);
        }else if(3000<=i && i<4000){
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
