i;
float a,b,c,d,e,f,k;
main(){
    for(i=0;~scanf("%f",&f);){
        if(++i%6==0){
            k=a*e-b*d;
            printf("%.3f %.3f\n",(c*e-b*f)/k,(a*f-c*d)/k);
        }
    a=b,b=c,c=d,d=e,e=f;
    }
}