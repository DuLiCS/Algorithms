#include<stdio.h>

#define bool int
#define true 1
#define false 0

int main(){
int n = 10;

printf("%d %d %d",func1(n),func2(n),func3(n));

return 0;
    
}

bool func1(int n){


    return (n%2==0)?true:false; 
}

bool func2(int n){

    return ((n/2)*2)==n?true:false;
}

bool func3(int n){

    return (n&1)==0?true:false;
}