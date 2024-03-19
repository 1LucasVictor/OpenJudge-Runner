#include<stdio.h>
int i,a[4];
char s[4];

int main(void){
    scanf("%s",s);
    for(i =0;i<4;i++){
        a[i] = s[i];
        //printf("%d\n",a[i]);
    }
if(a[0]-a[1] == 0&&a[2]-a[3] == 0){
    printf("Yes");
}else if((a[0] + a[1]) - (a[2] + a[3]) == 0){
    printf("Yes");
}else{
    printf("No");
}
return 0;    
}