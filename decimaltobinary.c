#include <stdio.h>
#include <math.h>

long decimalToBinary(int decimal){

    long binary = 0;
    int rem, temp = 1;

    while(decimal!=0){

          rem = decimal%2;
          decimal = decimal / 2;
          binary = binary + rem * temp;
          temp = temp * 10;
    }
    return binary;
 }

 int main(){

    int decimal;
    printf("Enter a number: ");
    scanf("%d", &decimal);
    printf("Equivalent binary number: %ld", decimalToBinary(decimal));
    return 0;
 }
