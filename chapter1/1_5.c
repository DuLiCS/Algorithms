#include<stdio.h>
#include<math.h>

int main(){

    const double pi = 3.1415926;
    const double acc_pi = 4.0*atan(1.0);
    printf("%.10f\n",acc_pi);
    printf("%.10f\n",4*atan(1));

    double r,h,s;
    r = 3.5;
    h = 9.0;
    s = acc_pi*r*r + 4* acc_pi * r * h;

    printf("%.10f\n",s);

    return 0; 
}