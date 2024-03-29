/**
 * @file multiples.c
 * @author Donovan Griego
 * @brief Finds the sum of multiples of 3 or 5 below a max number
 * @date 2020-10-22
 */
#include <stdio.h>
#define MAX 1000

int main() {
    int sum = 0;
    for(int i = 1; i < MAX; i++) {
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    printf("The sum of multiples of 3 or 5 below %d: %d\n", MAX, sum);
}