//
//

#include <iostream>
#include <stdio.h> // scanf, printf
#include <stdlib.h> // rand()
#include <time.h> //srand((unsigned int)time(NULL))

int main()
{
    srand((unsigned int)time(NULL));
    int randNum = 1 + rand()%9;
    int counter = 0;
    
    int input =0;
    
    do
    {
        ++counter;
       
        printf("This is %d attempt. you can input a number three times.input the number:\n",counter );
        scanf("%d", &input);
        printf("The number you input is %d \n", input );
        
        //each condition is independent.
        //up to 3 times.
        
        
        
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
    while( counter < 3 && randNum != input);
    
    printf("the answer is %d\n", randNum);
    
    if(counter == 3 && randNum != input) //you tried three times and you did not make it.
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
