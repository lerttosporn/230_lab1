#include<stdio.h>
#include<math.h>
int main()
{
    float a,x;
    int b,h,m;
    scanf("%f",&a);
    x=a*100;
    b=ceil(x);
    m=b%100;
    h=(b-m)/100;
      if(a>=0 && a<=11.59)
        printf("%d:%d a.m.",h,m);
    else if(a==12)
        printf("%d:%d0 p.m.",h,m);
    else
        printf("%d:%d p.m.",h,m);

        return 0;
}
