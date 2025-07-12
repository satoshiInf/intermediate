//
//  main.cpp
//  inte_p56_backward
//
//  Created by Satoshi on 7/12/25.
//

#include <iostream>
#include <stdio.h>


int main()
{
    
    const char name[] ="ABCDEFG";
    int length = strlen(name);
    
    
    //int subscription = length -1;
    //int startPosition = 0;
    //startPosition =0
    //startPosition =0; -> ABCEFG
    //length
    
    //int startPosition = 0;
    //startPosition = 0;
    // "ABCDEFG"　0123456
    
    // "GABCDEF"　6012345
    //  startposition + i - length
    // "FGABCDE"  5601234
    //for-loop from [0] to [end];
    
    
    std::cout << std::endl;
    
    for(int startPosition = 0; startPosition < length ; startPosition++ )
    {
        for(int i = 0; i < length ; i++)
        {
            // 0123456
            //else
            int index = i + startPosition;
            
            if( i + startPosition >= length)
            {
                index -= length;
            }
            else // i + startPosition <=  subscription
            {
                //i = i;
            }
            putchar(name[index]);
            
        }
        
        std::cout << std::endl;
        
    }

    return 0;
}
