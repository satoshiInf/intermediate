//
//  main.cpp
//  inte_p38
//
//  Created by Satoshi on 7/10/25.
//

#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>

int main()
{
    const char* name = "ABCAPPLE";
    printf("%s", name);
    
    for(int i = 0; i < strlen(name);i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        printf("\b \b");
        fflush(stdout);
    }
    
    
/*
    const char* name = "ABCAPPLE";
    printf("%s",name );
    
    // modern c++
    
    for(int i =0; i < strlen(name); i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        printf("\b \b");
        fflush(stdout);
    }
 */
    
    
    return 0;
}
