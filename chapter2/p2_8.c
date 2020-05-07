#include<stdio.h>

int main(){

double n,m;
n = 65536;
m = 655360;


double sum = 0;

for ( n; n <= m; n++)
{
    sum += 1/(n*n);    
}

printf("%.5f\n",sum);

return 0;


}