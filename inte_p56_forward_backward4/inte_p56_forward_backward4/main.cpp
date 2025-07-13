

#include <iostream>
#include <stdio.h>

int main()
{
    const char name[] = "ABCDEF";
    int length = strlen(name);
    std::cout << length << std::endl;
    
   
    
    
    int shift;
    for( shift = 0; shift < length; shift++)
    {
        //平行移動＋index＞０→ （与式＋length）％length
        
        for( int oldIndex = 0 ; oldIndex < length; oldIndex++)
        {
          
            std::cout << name[(oldIndex -shift + length)%length];
            
            // mod-classfication equation : general form
            // ( (oldIndex -shift) % length) + length)% length
            
        }
        std::cout << std::endl;
    }
     
        //when the program is done after loops
        std::cout << std::endl;
    
    
    //scrolling (slide numbers to left and the destination element such as A comes back to the end)
    
    
    for( shift = 0; shift < length; shift++)
    {
        
        for( int oldIndex = 0 ; oldIndex < length; oldIndex++)
        {
            std::cout << name[(oldIndex + shift )%length];
            
        }
        std::cout << std::endl;
    }
    
    
    
    return 0;
}
