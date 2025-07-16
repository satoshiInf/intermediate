//
//  main.cpp
//  inte_p56_5
//
//  Created by Satoshi on 7/14/25.
//

#include <iostream>
#include <stdio.h>

int main()
{
    
    const char name[]= "ABCDEF";
    int length = strlen(name);
    std::cout << length << std::endl; //中身だけ
    
    
    int shift;
    //"ABCDEF" -> "FABCDE";
    
    for(shift = 0 ; shift < length; shift++)
    {
        for(int i = 0 ; i < length ; i++)
        {
            int index = (i - shift + length)% length; //変更後の配列の順番
            std::cout << name[index];
        }
        std::cout<<"\n";
    }
    
    //"ABCDEF" -> "BCDEFA";
    
    std::cout<<"\n";
    
    for(shift = 0 ; shift < length; shift++)
    {
        for(int i = 0 ; i < length ; i++)
        {
            int index = ((i + shift) + length)% length; //変更後の配列の順番
            std::cout << name[index];
        }
        std::cout<<"\n";
    }
    

    return 0;
}
