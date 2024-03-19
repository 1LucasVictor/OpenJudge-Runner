int main(){
int a,b,i;
char op;
for(; ;){
scanf("%d %c %d", &a, &op, &b);
if(op=='+'){
printf("%d\n", a+b);
}else if(op=='-'){
printf("%d\n", a-b);
}else if(op=='*'){
printf("%d\n", a*b);
}else if(op=='/'){
printf("%d\n", a/b);
}else{
break;
}
}
return 0;
}