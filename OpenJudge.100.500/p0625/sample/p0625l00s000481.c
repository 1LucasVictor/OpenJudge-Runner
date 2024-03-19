/*head*/
#include<stdio.h>

/*main function*/

int main(){
        int a,b;
        int n=9;

        scanf("%d%d",&a,&b);

        if(a<1 || b<1){
                printf(":(\n");
        }
        else if(a<n && b<n){
                printf("Yay!\n");
        }
        else{
                printf(":(\n");
        }

        return 0;
}
