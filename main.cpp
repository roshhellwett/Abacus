#include <math.h>
#include <stdio.h>
int main()
{
    printf("\n----CREATED BY ROSHHELLWETT----\n");
    char choice;
    int sum, sub, mul, div, input_1, input_2, input_3;

    do
    {
        printf("KINDLY ENTER YOUR FIRST NUMBER \n");
        scanf("%d", &input_2);
        printf("KINDLY ENTER YOUR SECOND NUMBER \n");
        scanf("%d", &input_3);
        printf("\n");
        printf("KINDLY CHOOSE \n");
        printf("1. SUM \n");
        printf("2. SUBTRACT \n");
        printf("3. MUL \n");
        printf("4. DIV \n");
        printf("5. EXIT \n");
        printf("KINDLY CHOOSE BETWEEN 1 - 5 \n");
        scanf("%d", &input_1);
        switch (input_1)
        {
            case 1:
            {
                sum = input_2 + input_3;
                printf("THE RESULT IS %d \n", sum);
                break;
            }
            case 2:
            {
                sub = input_2 - input_3;
                printf("THE RESULT IS %d \n", sub);
                break;
            }
            case 3:
            {
                mul = input_3 * input_3;
                printf("THE RESULT IS %d \n", mul);
                break;
            }
            case 4:
            {
                div = input_3 / input_3;
                printf("THE RESULT IS %d \n", div);
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("Invalid Choice\n");
            }
        }
        printf("\n");
        printf("DO YOU WANT TO USE CALCULATOR AGAIN ? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    return 0;
}