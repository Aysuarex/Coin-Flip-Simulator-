#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <windows.h>

int coinToss();
int i, flips;
int headCount;
int tailCount;
int getch();
int main() 
{
    char choice;
    START: //Reference point

    headCount= 0;
    tailCount= 0;

    system("cls");
    system("color 0b");
    printf("\n----------------------------------------------------\n");
    printf("Welcome to Coin Flip Simulator!\n");
    printf("Enter the number of times you want to flip:  ");
    scanf("%d", &flips);

    srand(time(NULL));
    for(i=0; i<flips; i++)
    {
        if(coinToss()==0)
            headCount++;    
        else 
            tailCount++;
        if (i%10 == 9 )
            putchar('\n');
    }
    printf("\nHeads was flipped %d times.", headCount);
    printf("\nTails was flipped %d times.\n", tailCount);
    
    Sleep(1000);

    Replay:
    printf("\n\n----------------------------------------------------");
    printf("\nPress A to Flip again");
    printf("\nPress X to exit\n\n\t");
    scanf("%s", &choice);

    switch (choice)
    {
    case 'A':
    {
        goto START;
        break;
    }
    
    case 'X':
        exit(0);
    
    default:
        printf("\nERROR! Enter valid input\n");
        Sleep(500);
        goto Replay;
        break;
    }

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
