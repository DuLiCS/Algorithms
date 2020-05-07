#include<stdio.h>


int main(){

    int m = 10;

    int sum = 0;

    for (int i = 1; i <= m; i++)
    {
        sum += factori(i);
    }
    

    printf("%d",sum);


return 0;

}


int factori(int n){

    return n == 1?1:factori(n-1)*n;

}