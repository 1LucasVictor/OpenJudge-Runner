main(){
int S,h,m,s;
scanf("%d",&S);
if (S>3600){
h=S/3600;
m=S%3600/60;
s=S%3600%60;
}
else if (S>60 || S>3600){
h=0;
m=S/60;
s=S%60;
}
else if (S<60){
h=0;
m=0;
s=S%60;
}
printf("%d:%d:%d\n",h,m,s);
return 0;
}