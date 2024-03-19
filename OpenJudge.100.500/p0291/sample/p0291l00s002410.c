#include <stdio.h>

int main(){

    int t; //first line

    scanf("%d",&t);

    int r[t];
    int i = 0;
    int p;
    int j;


    while(i < t){
        scanf("%d",&r[i]);
        i++;
    }

    p = r[1] - r[0];

    for(i=0; i<t; i++){
        for(j=i+1; j<t; j++){
            if(p < (r[j] - r[i])){
                p = r[j] - r[i];
            }
        }
    }

    printf("%d\n",p);

    return 0;

}
