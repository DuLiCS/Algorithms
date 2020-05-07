#include<stdio.h>
#include<math.h>

int main(){

    for (int i = 100; i < 1000; i++)
    {
        int digit1 = i/100;
        int digit2 = i/10%10;
        int digit3 = i%10;

    if((pow(digit1,3)+pow(digit2,3)+pow(digit3,3))==i)
    {
        printf("%d\n",i);
    }
    }

    return 0;
    



}