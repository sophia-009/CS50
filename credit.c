# include <cs50.h>
# include <math.h>
# include <stdio.h>
int main(void)
{
    //finding number of digits in a number
    int count = 0;
    long cc_no ;
    cc_no = get_long("enter cc_no: ");
    long temp = cc_no;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    long cc_nox = cc_no ;
    int tempcc ;
    int last = 0 ;
    int secTolast = 0 ;
    while (cc_no > 0)
    {
        last += cc_no % 10 ;

        cc_no /= 10;
        tempcc = (cc_no % 10) * 2 ;
        if (tempcc > 9)
        {
            secTolast += (tempcc % 10) + ((tempcc / 10) % 10);
        }
        else
        {
            secTolast += tempcc ;
        }
        cc_no /= 10 ;
    }
    if ((last + secTolast) % 10 == 0)
    {
        if (count == 15)
        {
            int tempA = cc_nox / 10000000000000;
            if (tempA == 34 || tempA == 37)
            {
                printf("AMEX\n");
            }
        }
        else if (count == 16)
        {
            int tempM = cc_nox / 100000000000000;
            if (tempM == 51 || tempM == 52 || tempM == 53 || tempM == 54 || tempM == 55)
            {
                printf("MASTERCARD\n");
            }
        }
        else if (count == 13)
        {
            int tempV1 = cc_nox / 1000000000000;
            if (tempV1 == 4)
            {
                printf("VISA\n");
            }    
        }
        
        else if (count == 16)
        {
            int tempV2 = cc_nox / 1000000000000000;
            if (tempV2 == 4)
            {
                printf("VISA\n");
            }    
        }
    }
    else
    {
        printf("INVALID\n");
    }
}