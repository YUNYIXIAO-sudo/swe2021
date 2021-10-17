// sample 1‐4-1
#include <stdio.h>
int main(){
  float price;
  printf("Please input price:\n");
  scanf("%f", &price);
  float taxed_price = price * 1.08;
  printf("The total price is %f yen (reduced tax rate)\n", taxed_price);
}