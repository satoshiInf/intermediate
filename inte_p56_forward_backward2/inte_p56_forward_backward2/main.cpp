#include <iostream>
#include <string.h> // strlen


int main()
{
    char name[] ="ABCDEF";
    int length = strlen(name);
    std::cout << length << std::endl;
    
    //ABCDEF -> BCDEFA
    //          name[shift]
    //name[0]:A             B --> name[1] : i+1 =index
    //name[1]:B             C
    //name[2]:C             D
    
    for( int shift =0 ; shift < length ; shift++)
    {
        for( int i =0; i < length; i++)
        {
            int index = (shift + i ) % length; //index is the number + i from original index
            std::cout << name[index];
        }
        
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
    
    for( int shift = 0 ; shift < length ; shift++)
    {
        for( int i =0; i < length; i++)
        {
            // + length
            int index = (length - shift + i ) % length; //index is the number + i from original index
            std::cout << name[index];
        }
        
        std::cout << std::endl;
    }
    
    
    
  
    return 0;
}


/*
 Left rotation ( slide to left)
 for (int shift = 0; shift < length; ++shift)
 {
     for (int i = 0; i < length; ++i)
     {
         int index = (i + shift) % length;
         std::cout << name[index];
     }
     std::cout << std::endl;
 }
 
 index = (i + shift) % length;

 | i | (i + shift) % 6 | index | name\[index] |
 | - | --------------- | ----- | ------------ |
 | 0 | (0 + 1) % 6 = 1 | 1     | B            |
 | 1 | (1 + 1) % 6 = 2 | 2     | C            |
 | 2 | (2 + 1) % 6 = 3 | 3     | D            |
 | 3 | (3 + 1) % 6 = 4 | 4     | E            |
 | 4 | (4 + 1) % 6 = 5 | 5     | F            |
 | 5 | (5 + 1) % 6 = 0 | 0     | A            |


 
 Right rotation ( slide to right)
 for (int shift = 0; shift < length; ++shift)
 {
     for (int i = 0; i < length; ++i)
     {
         int index = (i - shift + length) % length;
         std::cout << name[index];
     }
     std::cout << std::endl;
 }
 
 index = (i - shift + length) % length;
 | i | (i - shift + 6) % 6 | index | name\[index] |
 | - | ------------------- | ----- | ------------ |
 | 0 | (0 - 1 + 6) % 6 = 5 | 5     | F            |
 | 1 | (1 - 1 + 6) % 6 = 0 | 0     | A            |
 | 2 | (2 - 1 + 6) % 6 = 1 | 1     | B            |
 | 3 | (3 - 1 + 6) % 6 = 2 | 2     | C            |
 | 4 | (4 - 1 + 6) % 6 = 3 | 3     | D            |
 | 5 | (5 - 1 + 6) % 6 = 4 | 4     | E            |


 
 */
