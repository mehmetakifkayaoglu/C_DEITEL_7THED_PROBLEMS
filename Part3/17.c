// Start a loop if the account id is not equal to -1
//
// ask balance
// ask spend
// ask deposit
// ask credit limit
//
// calc is limit enough
// if limit exceed 
//      show id
//      show balance
//      show limit
//      say the limit exceed
//
// ask account id 

#include <stdio.h>

int main()
{
    int account_id;
    int balance, spent, deposit, credit_limit;

    printf("Enter account id (-1 to stop) :");
    scanf("%d", &account_id);

    while( account_id != -1 )
    {
        printf("Enter Start Balance : ");
        scanf("%d",&balance );
        printf("Enter Spent : ");
        scanf("%d",&spent );
        printf("Enter Deposit : ");
        scanf("%d",&deposit );
        printf("Enter Credit Limit : ");
        scanf("%d",&credit_limit );

        if ( (balance + spent - deposit) > credit_limit)
        {
            printf("Account : %d\nCredit Limit : %d\nBalance : %d\nLimit Exceeded", account_id, credit_limit, balance);
        } 

        printf("Enter account id (-1 to stop) :");
        scanf("%d", &account_id);
    }

    return 0;
}