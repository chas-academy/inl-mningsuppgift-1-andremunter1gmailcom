#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here

    int rolls[100]; // Array for all the die roll results
    int counts[6] = {0}; // Array to store how many times a side has rolled
    int sum = 0; // Storing the sum of all the roll results

    for (int i = 0; i < 100; i++) {
        rolls[i] = (rand() % 6) + 1; // Throwing the dice and storing the roll in the rolls array

        sum += rolls[i]; // Adding the roll to the sum

        counts[rolls[i] - 1]++; // Incrementing the number of times the current roll has occured 
    }

    // Print out how many times each number rolled
    for (int i = 0; i < 6; i++) {
        printf("%d\n", counts[i]);
    }


    // Print sum of all rolls
    printf("%d\n", sum);


    // Print average
    float avg = (float) sum / 100;
    printf("%.1f", avg);

    return 0;
}
