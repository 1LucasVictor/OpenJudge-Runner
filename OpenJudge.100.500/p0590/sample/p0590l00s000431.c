    #include<stdio.h>
    #include<string.h>
    int main(void){
    int A,B,C,a,b,c,d,e,k,i,j,cou,v[1000000];
    char S[100000];
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&k);
    if(e-a>k){
        printf(":(");
    }else{
        printf("Yay!");
    }
    return 0;
    }