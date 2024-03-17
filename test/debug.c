#include <stdio.h>
#include <math.h>
#include<stdlib.h>
 
int count;
 
int count_digit(int a)
{
    int count = 0;
    while (a != 0)
    {
        count++;
        a /= 10;
    }
    return count;
}
 
int inputbool(int a)
{
    while (1)
    {
        int count = 0;
        int count_digit = 0;
        int check_rem = a;
        int rem = a;
        while (rem != 0)
        {
            rem /= 10;
            count++;
        }
        for (int i = count; i > 0; i--)
        {
            if (check_rem % 10 <= 1)
            {
                count_digit++;
            }
            check_rem /= 10;
            if (i == 1)
            {
                check_rem *= 10;
            }
        }
        if (count_digit == count)
        {
            return a;
        }
        else
        {
            printf("You entered decimal number!! Try Again: ");
            scanf("%d", &a);
        }
    }
}
 
int *returnbinary(int a)
{
    int i, counter = 0;
    int *storing_binary = (int *)malloc(25 * sizeof(int));
 
    for (i = 0; i <= 25; i++)
    {
        if (a % 2 == 1)
        {
            storing_binary[i] = 1;
            counter++;
        }
        else
        {
            storing_binary[i] = 0;
            counter++;
        }
        a /= 2;
        if (a == 0)
        {
            break;
        }
    }
    count = counter;
    return storing_binary;
}
 
int main()
{
    int digit_num1, digit_num2, i;
    int binary_num1, binary_num2, decimal_num1 = 0, decimal_num2 = 0;
    int store_mul, store_sum;
 
    printf("Enter First number in binary with digit less than 10: ");
    scanf("%d", &digit_num1);
    
    binary_num1 = inputbool(digit_num1);
    printf("Your First number is %d\n", binary_num1);
 
 
 
    printf("\nEnter Second number in binary with digit less than 10: ");
    scanf("%d", &digit_num2);
 
    binary_num2 = inputbool(digit_num2);
    printf("Your Second number is %d\n", binary_num2);
 
 
 
    digit_num1 = binary_num1;
    digit_num2 = binary_num2;
 
    // counting digits
    int count_num1, count_num2;
    count_num1 = count_digit(binary_num1);
    count_num2 = count_digit(binary_num2);
 
 
    // converting binary number into decimal
    for (i = 0; i < count_num1; i++)
    {
        decimal_num1 += (digit_num1 % 10) * pow(2, i);
        digit_num1 /= 10;
    }
    for (i = 0; i < count_num2; i++)
    {
        decimal_num2 += (digit_num2 % 10) * pow(2, i);
        digit_num2 /= 10;
    }
    printf("\nDecimal number of %d is %d\n", binary_num1, decimal_num1);
    printf("Decimal number of %d is %d\n", binary_num2, decimal_num2);
 
    // ************for multiplication************
    store_mul = decimal_num1 * decimal_num2;
 
    printf("\nThe product in decimal is %d", store_mul);
    int *arr_mul = returnbinary(store_mul);
 
 
    printf("\nThe product of %d and %d is ", binary_num1, binary_num2);
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d", arr_mul[i]);
    }
    // free(arr_mul);
 
 
    // ********************for addition**********************
    store_sum = decimal_num1 + decimal_num2;
    printf("\n\nThe sum in decimal is %d\n", store_sum);
    int *arr_sum =returnbinary(store_sum);
 
 
    printf("The sum of %d and %d is ", binary_num1, binary_num2);
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d", arr_sum[i]);
    }
    free(arr_sum);
 
    // *****************for division********************
    int rem, quot;
    rem = decimal_num1 % decimal_num2;
    quot = decimal_num1 / decimal_num2;
 
    int* arr_quot = returnbinary(quot);
 
    printf("\n\nquotient and remainder of %d/%d are ", binary_num1, binary_num2);
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d", arr_quot[i]);
    }
    free(arr_quot);
 
    printf(" and ");
 
    int* arr_rem = returnbinary(rem);
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d", arr_rem[i]);
    }
    free(arr_rem);
    printf(" respectively");
    }
