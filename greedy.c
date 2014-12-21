/**
* greedy.c
*
* cs50 problem set 1
*
* Raymond Rupiah
*
* program that calculates the minimum no. of coins used to
* make any given amount of change
*/
 
#include <cs50.h>
#include <stdio.h>
#include <math.h>
 
int main(void)
{
    float amount;
    do
    {
        printf("O hai! How much change is owed?\n");
        amount = GetFloat();
    }
    while(amount < 0);
 
    // convert float to int
    int change = round(amount * 100);
 
    // quarters to use
    int quarters = change / 25;
    change -= quarters*25;
 
    //dimes to use
    int dimes = change / 10;
    change -= dimes*10;
 
    //nickels to use
    int nickels = change / 5;
    change -= nickels*5;
 
    //pennies to use
    int pennies = change / 1;
    change -= pennies*1;
 
    // total no. of coins used
    int total = quarters + nickels + dimes + pennies;
    printf("%d\n", total);
}