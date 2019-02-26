#include <stdio.h>
#include <cs50.h>




int main (void)
{
    // declaration and initialisation of the variables
    long long creditCNumber;
    int counter = 0;
    long long ccard = 0;
    long long credit = 0;
    long long n = 0;
    int i = 0;
    int sum = 0;
    int sum1 = 0;
    long long creditC1 = 0;
    do
    {
        creditCNumber = get_long_long ("enter your credit card for verification");

    }
    while (creditCNumber <= 0);

    //declaring different variable from the card declation
    creditC1 = creditCNumber;
    credit = creditCNumber;

    // loop in order to get the lengh of credit card
    while (creditC1 > 0)
    {
        creditC1 = credit / 10;
        counter++;
    }


    verify the lengh of credit card meet the corect lengh
    for (i = 1; i <= counter; i++)
    {
        if (i % 2 ==0)
        {

            ccard = creditCNumber % 10;
            sum1 = ccard * 2;
        }
        if (i % 2 != 0)

        {
            ccard = creditCNumber % 10;
            sum1 = ccard * 1;
        }

        if (sum1 > 9)
        {
            sum1 = sum1 - 9;
        }
        sum = sum1 + sum;
        creditCNumber = creditCNumber / 10;
}
// check if the card is valid by looking at the last digitof the sum.
if (sum % 10 ==0)
{
    divid the credit card long long number of card
    while (credit > 200)

    {
        credit = credit / 10;
        n = credit;
    }
    // check the information of the card by looking at lengh and f
    if ((counter ==13) || (counter == 16) && n == 40)

    {
        printf("Visa\n");

    }

    // check the card information of the card by looking at the lengh and the f
    if ((counter == 15)&& (n ==34 || n == 37))
    {
        printf("AMEX\N");
        {

            // check the card information of the card by looking at the lengh and the f
            if((counter == 16) && (n == 52 || n == 53 || n == 54 || n == 55))

            {
                printf("Master card\n");
            }


        }
        else

        {
            // print out the invalidity of the credit card after the application of conditions
            printf("INVALID\N");
        }
    }
}



}
