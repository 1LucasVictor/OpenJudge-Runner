#include<stdio.h>
int main(void){
int N,i,handan;
int a[101];
scanf("%d",&N);
for(i=0;i<N;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<N;i++){
    // printf("%d",a[i]);
    if(a[i]%2==1){
        continue;
    }
    else{
        if(a[i]%3==0||a[i]%5==0){
            continue;
        }
        else{
           handan=1;
        }
    }
}
if(handan==1){
    printf("DENIED\n");
}
else{
    printf("APPROVED\n");
}
return 0;

}