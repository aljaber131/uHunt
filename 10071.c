#include<stdio.h>
int main(){
    int s,v,u=0,t,a;
    scanf("%d",&v);
    scanf("%d",&t);
    a=(v-u)/t;
    s=(u*t)+(1/2)*a*4*t*t;
    printf("%d",s);
    return 0;
}