int main(){
int a,b,c;
scanf("%d %d %d", &a,&b,&c);
if(a <= b && b <= c){
printf("%d %d %d\n", a, b, c);
}else if(a <= b && a >= c){
printf("%d %d %d\n", c, a, b);
}else if(b <= c && a >= c){
printf("%d %d %d\n", b, c, a);
}else if(a >= b && a <= c){
printf("%d %d %d\n", b, a, c);
}else if(a >= b && b >= c){
printf("%d %d %d\n", c, b, a);
}else if(a <= c && c <= b){
printf("%d %d %d\n", a, c, b);
}
return 0;
}