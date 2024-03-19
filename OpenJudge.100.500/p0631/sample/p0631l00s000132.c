 #include <stdio.h>
int main(){
    
int A,B,X;
 
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&X);
if(X>A&&A+B>X){
printf("YES");
}else{
printf("NO");
}
return(0);
}