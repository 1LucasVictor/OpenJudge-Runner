#include <stdio.h>
//Run with 'Ctrl + Alt + N'


int main(void){


    int X,Y,i,sw = 0;
    int t_asi,k_asi,t,k;

    scanf("%d %d",&X,&Y);



    for(i=0; i<=X; i++){
       k_asi = i*4;
       t_asi =  (X-i)*2;

        //printf("%d\n",i);
       if (k_asi+t_asi == Y){

           printf("Yes");
           sw = 1;
           break;
       }
    }

    if(sw == 0) printf("No");



    return (0);
}