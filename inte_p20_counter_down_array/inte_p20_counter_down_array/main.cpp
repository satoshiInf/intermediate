//
//

#include <iostream>
#include <stdio.h> //printf.scanf
#include <stdlib.h> // rand
#include <time.h> //srand

#define MAX 3 // const int max = 3;

int main()
{
    srand((unsigned int)time(NULL));
    int ranNum = 1 + rand() % 9;
    int num[MAX];
    int attempts = 0;
    int remain = MAX - attempts;
    
    for(int i =0; i < MAX; i++)
    {
        num[i] = -1;
    }
    
    
    printf("guess a created number\n");
    printf("creatednumber:%d\n",ranNum);
    
    do
    {
        int remain = MAX - attempts;
        
        if(remain> 0)
        {
            printf("input a number\n");
            scanf("%d", &num[attempts]);
            printf("you input %d\n" , num[attempts]);
        }
        
        //start: num[0] increment after substitution
        
        
        
        if(remain >0 && ranNum < num[attempts])
        {
            printf("The number you input is bigger than the created number\n");
        }
        else if(remain >0 && ranNum > num[attempts])
        {
            printf("The number you input is smaller than the created number\n");
        }
        else
        {
            //ranNum == num[attempts]
            printf("you win \n");
            break;
            //getting out of the loop without incrementing attempts
        }
        
        attempts++;
        //remain needs to be updated
        remain = MAX - attempts;
        printf("you can another %d times\n",remain);
        
    }
    while( remain > 0  && num[attempts] != ranNum);
    
    printf("show records:\n");
    
    for(int i = 0 ; i< MAX ;i++)
    {
        if(num[i] == -1)
        {continue;}//or break
        printf("you input %d ,as %d th attempt\n", num[i], i+1);
        
    }
    
    return 0;
}
 
