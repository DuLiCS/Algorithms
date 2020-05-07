#include<stdio.h>

int main(){
int n = 10;

int a1,a2;
a1 = func1(n);

a2 = func2(n);

printf("%d %d",a1,a2);


}

int func1(int n){

int  sum = 0;

    for (int i = 0; i <= n; i++)
    {
            sum += i;
    }
    
    return sum;
}

int func2(int n){

    return n == 1?1:func2(n-1)+n;
}