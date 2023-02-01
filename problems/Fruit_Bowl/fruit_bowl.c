/*
Problem :: 05

You have a bowl on your counter with an even number of pieces of fruit in it. Half of them 
are bananas, and the other half are apples. You need 3 apples to make a pie.

Task ::
Your task is to evaluate the total number of pies that you can make with the apples that are
in your bowl given to total amount of fruit in the bowl.

*/

#include <stdio.h>

enum terms {half = 2, create_pie = 3};

typedef struct pie_data {
    int pie;
    int leftover;
}pie_operation;

pie_operation fruit_bowl(int *);

int main(void) {

    int total_fruit = 0;
    int n_apples = 0;
    pie_operation result;

    printf("There should be EVEN number of fruits in the bowl\n");
    printf("\nEnter the total amount of fruit in the bowl :: ");
    scanf("%d", &total_fruit);

    n_apples = total_fruit/half;

    result = fruit_bowl(&n_apples);

    printf("The number of apple pies that can be made :: %d\n", result.pie);
    printf("The number of apples left :: %d\n", result.leftover);

    return 0;
}

pie_operation fruit_bowl(int *frt) {

    pie_operation apple;
    apple.pie = (*frt)/create_pie;
    apple.leftover = (*frt)%create_pie;

    return apple;
}