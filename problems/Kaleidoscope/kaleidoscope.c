/* 
Problem :: Kaleidoscope

I'm a kaleidoscope vendor and for one kaleidoscope I charge Rs. 5.00,
but I have a very big heart that's why for those who buys more than 1 kaleidoscope,
I give discount of 10% for each. Tax is 7%.

Find the amount customer needs to pay.

 */

#include <stdio.h>

float price(float *);

enum amount {k_price = 5};

int main(void) {

    float n_products = 0.0;

    printf("Enter the number of Kaleidoscope you want :: ");
    scanf("%f", &n_products);

    printf("The amount is :: %.2f\n", price(&n_products));
    return 0;
}

float price(float *num_k) {

    if (*num_k > 1) {
        *num_k = *num_k * k_price;
        *num_k = (*num_k) - ((0.1) * (*num_k));
        return ((*num_k) + ((0.07) * (*num_k)));
    }
    else {
        *num_k = *num_k * k_price;
        return ((*num_k) + ((0.07) * (*num_k)));
    }

}