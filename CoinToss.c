#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <windows.h>

int coinToss();
int i, flips;
int headCount= 0;
int tailCount= 0;

int main() 
{
    int choice;

    system("cls");
    system("color 0b");
    
    START:
    printf("\n----------------------------------------------------\n");
    printf("Welcome to Coin Flip Simulator!\n");
    printf("Enter the amount of times you want to flip:  ");
    scanf("%d", &flips);

    srand(time(NULL));
    for(i=0; i<flips; i++)
    {
        if(coinToss()==0)
            headCount++;    
        else 
            tailCount++;
        if (i%10 == 0)
            putchar('\n');
        //getch();
    }
    printf("\nHeads was flipped %d times.", headCount);
    printf("\nTails was flipped %d times.\n\n\n", tailCount);

    Sleep(1000);
    printf("----------------------------------------------------");
    printf("\nPress A to continue flipping");
    printf("\nPress X to exit");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'A':
        goto START;
        break;
    
    case 'X':
        exit(0);
    
    default:
        printf("\nERROR! Enter valid input");
        break;
    }
    
    goto START;

    return 0;
}

int coinToss()
{
        if(rand()%2 == 0)
        {
            printf("H "); 
            return 0;
        }
        else
        {
            printf("T ");
            return 1;
    }
}
