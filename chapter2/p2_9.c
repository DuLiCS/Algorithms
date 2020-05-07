#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

    int a ,b ,c ;
    a = 1;
    b = 6;
    c = 4;

    double r;

    r = a/b;

    char control_pr[] = "%.";
    char control_lst[] = "f";
    char num = (char)(c);
    printf(strcat(control_pr,(strcat(num,control_lst))), 4);




    return 0;


}