//
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(NULL));
    int randNum = 1 + rand()%9;
    const int max_stage = 3;
    int remain = max_stage;
    
    int input =0;
    
    do
    {
        
       
        printf("you have another %d attempt. \nyou can input a number three times.\ninput the number:\n",remain );
        scanf("%d", &input);
        printf("The number you input is %d \n", input );
        
        //each condition is independent.
        //up to 3 times.
        remain--;
        
        
        if(randNum > input)
        {
            printf("The number you input is smaller than the created number:\n");
        }
        else if(randNum < input)
        {
            printf("The number you input is bigger than the created number:\n");
        }
        else
        {
            break;
        }
        
        
    }
    while( remain > 0 && randNum != input);
    
    printf("the answer is %d\n", randNum);
    
    if(remain == 0 && randNum != input) //you tried three times and you did not make it.
    {
        printf("the game over\n");
    }
    else
    {
        //randNum == input
        printf("the game is clear, well done\n");
    }

    
    
    return 0;
}
