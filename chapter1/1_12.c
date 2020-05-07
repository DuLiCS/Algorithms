#include<stdio.h>

int main(){
int a,b,c,x,y,z;

a= 100;
b=7;
c = 355;

x = a;
if (b>x)
{
    x = b;
}
if(c>x){
    x = c;
}

z = a;
if(b<z){
    z = b;
}
if(c<z){
    z = c;
}
y = a + b + c - x - z;

printf("%d %d %d",z, y, x );

}


