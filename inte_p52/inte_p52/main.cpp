
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
    //const char* name = "BOOBOOBOO";
    //sizeof(name) =pointer size, sizeof(*name)=char size,
    //int count = sizeof(name)/ sizeof(*name);
    //this is wrong
    
    int cnt = 0;
    const char name[] = "ABCDEFG";
    
    
    size_t length = strlen(name);
    std::cout<< length<< std::endl;
    
    while(true)
    {
        putchar('\r');
        for(int i = 0; i < length ; i++)
        {
            //if i from start < length
            putchar(name[(cnt + i % length)]);
            
        }
        
        
        fflush(stdout);
        
        
        if( cnt < length -1)
            cnt++;
        else // cnt == length -1
            cnt = 0;
    }

    return 0;
}
        
        
    
        /*
        if(cnt < length -1)
        {
            cnt ++;
        }
        else
        {
            cnt = 0;
            break;
        }
         */
        



    //bool isCorrect = false;
    //while(!isCorrect)
    /*
    while(!isCorrect)
    {
        putchar('\r');
        //increment
        for(int i = 0 ; i < length ; i++)
        {
           if( cnt + i <length)
           {
               putchar('\r');
               
           } ;
        };
        //decrement
        for(int i = 0 ; i < length ; i++)
        {
             
        };
    }

    */
    

