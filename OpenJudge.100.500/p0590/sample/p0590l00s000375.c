#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int s[]={0,0,0,0,0};
    
    int i,j,k,h,l;
    bool a=true;
    
    for (i=0;i<5;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&l);
    for (j=0;j<5;j++){
        for (k=0;k<5;k++){
            if (j<k){
                if (abs(s[k]-s[j])>l){
                    a=false;
                }
            }
        }
    }
    if (a==true) printf("Yay!");
    else printf(":(");
    return 0;
}