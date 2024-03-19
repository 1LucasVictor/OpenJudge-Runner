#include <stdio.h>
#include <math.h>
void A(void);
void B(void);
void C(void);
void C2(void);
void D(void);

int main(void){
    C();
    return 0;
}

void A(void){
    int a,b,c,k;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d",c,a,b);
}

void B(void){
    int n,m,i,k=0;
    double sum=0;
    int array[1000];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    for(i=0;i<n;i++){
        if(array[i]>=sum/(4*m))k++;
    }
    if(k>=m){printf("Yes");
    }else{printf("No");}
}

void C(void){
    double a,b,def,min1,min2;
    long int min;
    scanf("%lf %lf",&a,&b);
    min1=fmod(a,b);
    min2=fabs(fmod(a,b)-b);
    if(min1<min2){
        min=min1;
    }else{
        min=min2;
    }
    printf("%ld",min);
}