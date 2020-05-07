#include<stdio.h>
#include<math.h>

int main(){

    double sum = 0.0;

    double count = 1;

    int flag = 1;
    
    while((1/count)>0.000001){

        sum += (pow(-1,flag+1)*1/count);
        count += 2;

    flag++;

    }


    printf("%f",sum);

    return 0;
}