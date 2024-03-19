#include<stdio.h>
int main(){

char s[3],i,flag=0;
scanf("%s",&s);
for(i=0;i<3;i++){
    if(s[i]=='7'){
        flag=1;
        break;
    }
}
if(flag){
    printf("Yes");
}
else{
    printf("No");
}


}
