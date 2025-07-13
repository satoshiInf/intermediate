//
//  main.cpp
//  inte_p56_forward_backward
//
//  Created by Satoshi on 7/12/25.
//

#include <iostream>
#include <stdio.h>

int main()
{
    const char name[] = "ABCDEFG";
    int length = strlen(name);
    std::cout << length << std::endl;
    
    
    
    // initial = 0 ;
    // ABCDEF :012345
    // initial = 1 ;
    // ABCDEF :501234
    
    //int initial =0
    // ABCDEF :012345
    //int initial =1
    // ABCDEF :123450
    
    //int initial;
    //right
    
    for(int initial =0 ; initial < length; initial++)
    {
        
        for( int i = 0; i < length; i++)
        {
            int backward = i + initial;
            
            if( i + initial < length)
            {
            }
            else
            {
                backward = i +  initial - length;
                //
            }
            std::cout << name[backward];
            
        }
        std::cout << std::endl;
        
    }
    
    std::cout << std::endl;
    
    //left
    
    //int initial =0
    // ABCDEF :012345
    //int initial =1
    // FABCDE :501234
    // name[0]-> name[1]
    // name[1]-> name[2]
    // name[5]-> name[0]
    
     
    
    
    //ABCDEF
    //FABCDE
     
    for(int initial =0 ; initial < length; initial++)
    {
        for( int i = 0; i <= length; i++)
        {
            int index = (length - initial + i) % length;
            std:: cout << name[index];
                
        }
        std::cout << std::endl;
    }
        
        
    
    
    
    

    return 0;
}
