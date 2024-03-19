#include<stdio.h>
int main(void)
{

double a,b,c,d,e,k;
double arr[5];
scanf("%lf",&arr[0]); 
scanf("%lf",&arr[1]);
scanf("%lf",&arr[2]);
scanf("%lf",&arr[3]);
scanf("%lf",&arr[4]);
scanf("%lf",&k);

int i=4;
while(i>0){
    int l=1;
    while(i-l>0){
        if (arr[i]-arr[i-l]>k) {
            printf(":(");
            return 0;
        }
        
        l=l+1;
    }
    i=i-1;
}
printf("Yay!");
return 0;

}