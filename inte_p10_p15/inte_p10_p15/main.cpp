//
//  main.cpp
//  inte_p10_p15
//
//  Created by Satoshi on 7/9/25.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand((unsigned int)time(NULL));
    int randNum = 5 + rand()% 10;
    printf("created number is: %d \n", randNum);
    int input;
    
    do
    {
        printf("input number \n");
        scanf("%d", &input);
        printf("You input %d\n", input);
        
        if(randNum > input)
        {
            printf("The number you input is smaller than the created number\n");
        }
        else if(randNum < input)
        {
            printf("The number you input is bigger than the created number\n");
        }
        else
        {
            break;
        }
    }
    while(randNum != input);

    printf("the game is over\n");
 
    return 0;
}
