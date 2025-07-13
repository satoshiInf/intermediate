//
//  main.cpp
//  inte_p56_forward_backward3
//
//  Created by Satoshi on 7/13/25.
//

#include <iostream>
#include <stdio.h>

int main()
{
    const char name[] = "ABCDEF";
    int length = strlen(name);
    std::cout << length << std::endl;
    
    //scrolling (slide numbers to right and the destination element such as F comes back to the first)
    
    /*
     文字:    A   B   C   D   E   F
     添字:    0   1   2   3   4   5

     元:    A   B   C   D   E   F
     新:    F   A   B   C   D   E
     添字:  0   1   2   3   4   5

     
     */
    
    
    int shift;
    for( shift = 0; shift < length; shift++)
    {
        
        for( int i = 0 ; i < length; i++)
        {
            // NewIndex = i - shift
           
            /*
             元:   A  B  C  D  E  F
             →     F  A  B  C  D  E
                   ↑  ↑  ↑  ↑  ↑  ↑
             新:   0  1  2  3  4  5

             */
            
            if( shift + i < length)
            {
                int index = ( (- shift + i) +length )% length;
                std::cout << name[index];
                
            }//F
            else //shift + i => length
            {
                int index =  ((-shift + i + length))% length;
                std::cout << name[index];
            }
            
            //std::cout << name[i];
            
        }
        std::cout << std::endl;
    }
    
        //when the program is done after loops
        std::cout << std::endl;
    
    
    //scrolling (slide numbers to left and the destination element such as A comes back to the end)
    
    //int shift
    /*
     // NewIndex = i + shift
     // NewIndex = shift - i
     /*
      元:   A  B  C  D  E  F
      →     B  C  D  E  F  A
            ↑  ↑  ↑  ↑  ↑  ↑
      新:   0  1  2  3  4  5

      */
     
    
    
    for(shift =0 ; shift < length ; shift++)
    {
        int index;
        for( int i = 0 ; i < length ; i++)
        {
            if(shift + i < length)
            {
                index = shift + i;
            }
            else // shift + i >= length
            {
                index = shift + i - length;
            }
            std::cout << name[index];
        }
        std::cout << std::endl;
    }
    
    
    
    return 0;
}
