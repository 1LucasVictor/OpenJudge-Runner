#include<stdio.h>
int sum[20000];
int main(){
int a,b;
char c;
int i;
for( i=0;;i++){
    scanf("%d %c %d",&a,&c,&b);
    if(c == '+'){
        sum[i] = a + b;
    }
    else if(c == '-'){
        sum[i] = a - b;
    }
    if(c == '*'){
        sum[i] = a * b;
    }
    if(c == '/'){
        sum[i] = a / b;
    }
    if(c == '?'){
    break;
    }
}
for(int j=0;j<i;j++){
    printf("%d\n",sum[j]);
}


return 0;
}

