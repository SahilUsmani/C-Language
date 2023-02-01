

#include <stdio.h>

enum terms {three = 3, five = 5};

int main(void) {

    int num = 0;
    int count_3 = 0;
    int count_5 = 0;
    int count_s = 0;

    printf("Enter the integer :: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if ((i%three) == 0) {
            count_3++;
        }

        if ((i%five) == 0) {
            count_5++;
        }

        if (((i%five) == 0) && ((i%three) == 0)) {
            count_s++;
        }
    }

    count_3 -= count_s;
    count_5 -= count_s;
    printf("Count of three :: %d\n", count_3);
    printf("Count of five :: %d\n", count_5);
    printf("Count of common :: %d\n", count_s);

    int arr3[count_3];
    int arr5[count_5];
    int arrs[count_s];

    int j = 0;
    int k = 0;
    int s = 0;

    for (int i = 1; i < num; i++) {
        if (((i%three) == 0) && ((i%five) != 0)) {
            arr3[j] = i;
            j++;
        }

        if (((i%five) == 0) && ((i%three) != 0)) {
            arr5[k] = i;
            k++;
        }

        if (((i%five) == 0) && ((i%three) == 0)) {
            arrs[s] = i;
            s++;
        }
    }

    int sum_three = 0;
    int sum_five = 0;
    int sum_common = 0;

    for (int i = 0; i <= (count_3 - 1); i++) {
        printf("%d ", arr3[i]);
        sum_three += arr3[i];
    }
    printf("\n");

    for (int i = 0; i <= (count_5 - 1); i++) {
        printf("%d ", arr5[i]);
        sum_five += arr5[i];
    }
    printf("\n");

    for (int i = 0; i <= (count_s - 1); i++) {
        printf("%d ", arrs[i]);
        sum_common += arrs[i];
    }
    printf("\n");

    int final = 0;
    final = sum_three + sum_five + sum_common;

    printf("The sum :: %d\n", final);
    
    return 0;
}