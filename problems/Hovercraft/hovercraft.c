

#include <stdio.h>

enum term {cost_each = 200000, sell_each = 300000, insurance = 100000, max_hover = 10};

int main(void) {

    int n_hover = 0;
    int sales = 0;
    int total_cost = 0;
    int total_sell = 0;
    int max_cost = 0;

    max_cost = (cost_each * max_hover) + insurance;

    printf("The Cost of making 10 Hovercrafts each month :: %d\n", max_cost);

    printf("Enter the number of Hovercrafts sold :: ");
    scanf("%d", &n_hover);

    total_cost = n_hover * cost_each;
    printf("The Cost of making %d Hovercrafts :: %d\n", n_hover, total_cost);

    total_sell = n_hover * sell_each;
    printf("The Selling price of %d Hovercrafts :: %d\n", n_hover, total_sell);

    sales = total_sell - (total_cost + insurance);
    printf("Sales made :: %d\n", sales);

    if (total_sell > max_cost) {
        printf("Profit\n");
    }
    else if (total_sell < max_cost) {
        printf("Loss\n");
    }
    else {
        printf("Broke Even\n");
    }

    return 0;
}