#include<stdio.h>

int main(){

     int year;
     year = 1900;

    printf("%s",((year%4==0)||(year%400==0))?"yes":"no");
    



    return 0;



}