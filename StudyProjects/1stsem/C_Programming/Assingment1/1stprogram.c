#include <stdio.h>
#include <string.h>

int main (){
    float price,tax;
    float final;
    printf("\nPrice-->");
    scanf("%f",&price);
    printf("\nTax-->");
    scanf("%f",&tax);
    final = ((tax / 100)*price) + price;
    printf("MRP : %f",final);
    return 0;
}