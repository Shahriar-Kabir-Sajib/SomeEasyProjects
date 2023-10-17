#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("------------ Welcome to SKS Online Banking System ------------\n\n");

    int pinNumber = 12345;
    int pin;
    printf("Please Enter Your Five Digit PIN Number: ");
    scanf("%d", &pin);

    while (pin != pinNumber)
    {
        printf("\nYour PIN Number is Incorrect\nPlease Try Again\n\n");
        printf("Please Enter Your Valid Five Digit PIN Number: ");
        scanf("%d", &pin);
    }

    printf("Please Choice Services:\n1.Withdraw\t2.Transfar\t3.Deposit");
    printf("\n4.Check Balance\t5.Change Pin\t6.Return Card\n");
    int choice;
    printf("------------> ");
    scanf("%d", &choice);

    double balance = 55407.67;
    int currentPIN, changedPIN1, changedPIN2;

    while (choice != 6)
    {
        double amount;
        switch (choice)
        {
        case 1:
            printf("You can withdraw maximum 50,000 BDT\n\n");
            printf("Enter your amount: \n");
            scanf("%lf", &amount);
            printf("\n\nYour tansaction is successfully done.\n");
            balance = balance - amount;
            printf("Your new balance is: %.2lf\n\n", balance);

            printf("Do you want to print receipt?\n1.Yes\t2.No");
            printf("\n------------> ");
            int receipt;
            scanf("%d", &receipt);
            if (receipt == 1)
            {
                printf("Don't Forget to Collect Your Receipt.\nThank You\n\n");
                break;
            }
            else
            {
                printf("\n\n");
                break;
            }
        case 2:
            printf("Enter Account Number: ");
            int accountNumber;
            scanf("%d", &accountNumber);
            printf("Enter your amount: \n");
            scanf("%lf", &amount);
            printf("\n\nYour amount is successfully transfered.\n");
            balance = balance - amount;
            printf("Your new balance is: %.2lf\n\n", balance);

            printf("Do you want to print receipt?\n1.Yes\t2.No");
            printf("\n------------> ");
            scanf("%d", &receipt);
            if (receipt == 1)
            {
                printf("Don't Forget to Collect Your Receipt.\nThank You\n\n");
                break;
            }
            else
            {
                printf("\n\n");
                break;
            }
        case 3:
            printf("Enter your amount: \n");
            scanf("%lf", &amount);
            printf("\n\nYour amount is successfully deposited.\n");
            balance = balance + amount;
            printf("Your new balance is: %.2lf\n\n", balance);

            printf("Do you want to print receipt?\n1.Yes\t2.No");
            printf("\n------------> ");
            scanf("%d", &receipt);
            if (receipt == 1)
            {
                printf("Don't Forget to Collect Your Receipt.\nThank You\n\n");
                break;
            }
            else
            {
                printf("\n\n");
                break;
            }
        case 4:
            printf("\n\nYour available balance is: %.2lf\n\n", balance);
            break;
        case 5:
            printf("Enter your current PIN number: \n");
            scanf("%d", &currentPIN);
            while (currentPIN != pin)
            {
                printf("Your current PIN number is incorrect.\nPlease enter the correct PIN number:\n");
                scanf("%d", &currentPIN);
            }

            printf("Enter your new pin number: \n");
            scanf("%d", &changedPIN1);
            printf("Please confirm your new pin number: \n");
            scanf("%d", &changedPIN2);
            if (changedPIN1 == changedPIN2)
            {
                pin = changedPIN2;
                printf("\n\nYour PIN number is successfully changed.\n");
                printf("Please don't share your PIN number with others.\n\n");
            }
            else
            {
                printf("\n\nYour confirmed PIN number is not similar to the new PIN number.");
                printf("\nPlease try again\n\n");
            }
            break;
        }
        printf("Please Choice Services:\n1.Withdraw\t2.Transfar\t3.Deposit");
        printf("\n4.Check Balance\t5.Change Pin\t6.Return Card\n");
        printf("------------> ");
        scanf("%d", &choice);
    }
    printf("\n\nThanks for using SKS Bank.\n");

    return 0;
}