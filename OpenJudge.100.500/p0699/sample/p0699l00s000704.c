#include <stdio.h>
int main(){
    int a[3];
    for(int z=0;z<3;z++){
        scanf("%d", &a[z]);
    }
    int co5=0;
    int c07=0;

    for(int x=0;x<3;x++){
        if(a[x]==5){
            co5++;
        }
        else if(a[x]==7){
            c07++;
        }
    }

    if(co5==2 && c07==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    

}