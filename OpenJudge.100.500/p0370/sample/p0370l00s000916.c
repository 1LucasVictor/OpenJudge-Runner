x,y;
main(){
char c;
for(;scanf("%d %c %d",&x,&c,&y),c!='?';){
switch(c){
case '+':x+=y;break;
case '-':x-=y;break;
case '*':x*=y;break;
case '/':x/=y;break;
}
printf("%d\n",x);
}
}