#include<stdio.h>
#include<string.h>
int main(void){
        int size;
        scanf("%d",&size);
        int a[size][3];
        int i;
        for(i=0;i<size;i++){
                scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
        }
        int j;
        char out[4]="NO";
        for(i=0;i<size;i++){
                for(j=0;j<3;j++){
                        if(a[i][j%3]*a[i][j%3]==a[i][(j+1)%3]*a[i][(j+1)%3]+a[i][(j+2)%3]*a[i][(j+2)%3]){
                                strcpy(out,"YES");
                        }
                }
                printf("%s\n",out);
                strcpy(out,"NO");
        }
        return 0;
}