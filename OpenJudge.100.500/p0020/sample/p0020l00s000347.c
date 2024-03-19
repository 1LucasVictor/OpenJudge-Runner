main(){
  long double a,b,c,d,w,x,y,z,t,e,m,p;
  int i;
scanf("%d",&i);
while(i>0){
scanf("%Lf %Lf %Lf %Lf %Lf %Lf %Lf %Lf",&a,&w,&b,&x,&c,&y,&d,&z);
 t=a-b;
 e=w-x;
 m=t/e;
 t=c-d;
 e=y-z;
 p=t/e;
 (m==p)?printf("YES\n"):printf("NO\n");i--;}return 0;}