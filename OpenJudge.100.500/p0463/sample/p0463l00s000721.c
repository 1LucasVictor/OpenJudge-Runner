#include<stdio.h>
#include<math.h>

int main(void){
        int i;

        scanf("%d",&i);
        if(i%10==3){
        printf("bon\n");
}
        else if(i%10==0|i%10==1|i%10==6|i%10==8){
        printf("pon\n");
}
        else{
        printf("hon\n");
}


        return 0;
}