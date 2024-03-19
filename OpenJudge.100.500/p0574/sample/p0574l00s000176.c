#include<stdio.h>
int main(){
    int a[4];
    int i=0;
    int A;
    scanf("%d",&A);
    a[0]=A/1000;
    a[1]=(A-a[0]*1000)/100;
    a[2]=(A-a[0]*1000-a[1]*100)/10;
    a[3]=(A-a[0]*1000-a[1]*100-a[2]*10);
    while(1){
        if(a[i]==a[i+1]){
            printf("Bad\n");
            break;
        }
        else if(i==2){
            printf("Good\n");
            break;
        }
        i++;
    }

    return 0;
}