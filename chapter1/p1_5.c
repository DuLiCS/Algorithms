#include<stdio.h>
#include<math.h>


int main(){

    double x1,y1,x2,y2;

    x1 = 0;
    y1 = 0;

    x2 = 1;
    y2 = 1;

    double distance;
    distance =sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    
    printf("%f",distance);
    return 0 ;
}