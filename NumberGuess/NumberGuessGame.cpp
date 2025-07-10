
// class.cpp
#include "NumberGuessGame.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <algorithm>


    void NumberGuessGame::run()
    {
        generateRanNum();
        getUserInputNum();
        showResult();
    
    }

    void NumberGuessGame::generateRanNum()
    {
        srand((unsigned int)time(NULL));
        randomNum = 1 + rand()% 1000;
        printf("Generate number \n");
        printf("The created number is %d \n", randomNum);

    }

    void NumberGuessGame::getUserInputNum()
    {
        // std::fill(inputNum,)
        attempts = 0;
    
        do
        {
            printf("you can input for another %d times\n", MAX - attempts);
            printf("input a number");
            scanf("%d",&inputNum[attempts] );
            printf("you input %d",inputNum[attempts] );

            if(inputNum[attempts] >randomNum)
            {
                printf("too big\n");
            }
            else if(randomNum > inputNum[attempts])
            {
                printf("too small\n");
            }
            else
            {
                //equal
                printf("you correct\n");
                isCorrect = true;
                attempts++;
                break;
            }
                //attempts++;
                attempts++;

        }
        while( MAX - attempts > 0  && inputNum[attempts -1]!= randomNum);

    }

    void NumberGuessGame::showResult()
    {
        
        if( !isCorrect)
        {
            printf("failed\n");
            printf("the answer is %d\n", randomNum);

            
        }
        else
        {
            printf("succeeded\n");
            
        }

        printf("Result:\n");
        printf("Times: Input and Difference:\n");

        for(int i = 0; i < attempts; i++ )
        {
                int done = i + 1;
                printf("%d : %d %+d\n", done, inputNum[i], abs(inputNum[i] - randomNum) );
                
        }

    }

