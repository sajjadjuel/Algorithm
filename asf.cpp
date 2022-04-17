#include<stdio.h>
int main(){

int n;
int m,gcd;
float lcm;
printf("enter the two number: ");
scanf("%d %d",&n,&m);
int p=n;
int q=m;
do{
    if(n>m)
    {
          n=n-m;
          gcd=n;
    }

    else
    {m=m-n;
     gcd=m;
    }
}
while (n!=m);
printf("%d",gcd);

lcm=(p*q)/n;
printf("\n%f",lcm);
return 0;
}
