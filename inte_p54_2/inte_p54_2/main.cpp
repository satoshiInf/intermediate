//
//  main.cpp
//  inte_p54_2
//
//  Created by Satoshi on 7/12/25.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

//scrolliing charactors

int main()
{
    
    //int cnt =0;
    const char name[] = "ABCDEF";
    //management by subdcript
    size_t length = strlen(name);
    std::cout << length << std:: endl;
    
    
    putchar('\r');
    
    
    
    /*
    //length -1 == subscript
    int cnt = 0;
    {
        for(int i= 0; i < length ; i++ )
        {
            if( cnt+ i < length)
            {
                putchar( name[cnt + i] );
            }
            else
            {
                //does not exist
            }
        }
    }
    
    std::cout << std::endl;
    
        cnt = 1;
        
        for(int i =0 ; i < length ; i++)
        {
            //if cnt+ i = subscript -> do calculation
            //if cnt+ i < subscript -> do calculation
            //length = subscript +1
     
            // cnt + i <= subscript means that cnt + i < length
            
            // if cnt + i > subscript -> cnt + i = cnt + i -subscript
     
            if( cnt+ i < length)
            {
                putchar( name[cnt + i]);
            }
            else
            {
                putchar( name[cnt + i - length]);
            }
        }
     
     
     // until cnt = length -1
     
     */
     
      // int  cnt = 0;
    for( int cnt = 0; cnt < length ; cnt++)
    {
        for(int i=0 ; i < length; i++)
        {
            if( cnt+ i < length)
            {
                putchar( name[cnt + i]);
            }
            else
            {
                putchar( name[cnt + i - length]) ;
            }
            
        }
            std::cout << std::endl;
    }
        

        
    
    
        
    
    
    
    
    
    
   

    return 0;
}
