#include<stdio.h>

int main(void){
        int a,b,i,n[10];
        i = 0;
        char s[32];

        while(fgets(s,sizeof(s),stdin) != NULL){
                sscanf(s,"%d %d" , &a , &b);
                n[i++] = f(a + b);
        }
        for(i=0;n[i]!=0;i++){
                printf("%d\n",n[i]);
        }

        return(0);
}

int f(int i){
        int c = 1;
        while(1){
                if(i/10 > 0){
                        i = i /10;
                        c++;
                }else break;
        }
        return c;
}