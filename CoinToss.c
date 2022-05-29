#include <stdio.h>
#include <time.h>

int coinToss();
int rand();
int srand();
//char getch();
int i, flips;
int headCount= 0;
int tailCount= 0;

int main() 
{
    printf("Welcome to Coin Flip Emulator!\n");
    printf("Enter the amount of times you want to flip:  ");
    scanf("%d", &flips);

    srand(time(NULL));
    for(i=0; i<=flips; i++);
    {
        if(coinToss()==0)
            headCount++;    
        else 
            tailCount++;
        //if (i%10 == 0)
          //  putchar('\n');
        //getch();
        printf("Head was flipped %d times.", headCount);
        printf("Tail was flipped %d times.", tailCount);

    }
    
    //printf("Head was flipped %d times.", headCount);
    //printf("Tail was flipped %d times.", tailCount);
}

int coinToss()
{
    for(i=0;i<=flips;i++);
    {
        if(rand()%2 == 0)
        {
            //printf("Heads"); 
            return 0;
        }
        else
        {
            //printf("Tails");
            return 1;
        }
    }
}
