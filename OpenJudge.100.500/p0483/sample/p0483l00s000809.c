 #include <stdio.h>
 int main (void){
int a,b,c,d,e=0;
scanf("%d",&a);
b = a/100;
c = (a-b)/10;
d = a-b-c;
if(b%7!=0){
    if(c%7!=0){
        if(d%7!=0){
            //printf("No");
            e=1;
        }
    }
}
if(e==0){
    printf("Yes");
}else{
    printf("No");
}
}