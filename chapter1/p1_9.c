#include<stdio.h>
#include<math.h>

int main(){

    int a , b , c;
    a = 3;
    b = 4;
    c = 5;
    printf("%s",((a+b)>c)&&((fabs(a-b))<c)?"yes":"no");


    return 0; 
}