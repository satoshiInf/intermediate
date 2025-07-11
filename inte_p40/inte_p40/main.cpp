//
//  main.cpp
//  inte_p40
//
//  Created by Satoshi on 7/11/25.
//

#include <iostream>
#include <time.h>
#include <chrono>
#include <thread>

int sleep(int timeSeconds)
{
    std::this_thread::sleep_for(std::chrono::seconds(timeSeconds));
    return timeSeconds;
}


int main()
{
    std::cout<< "Hello" << std::endl;
    fflush(stdout);
    sleep(1);
    
    std::cout<< "How are you" << std:: endl;
    fflush(stdout);
    sleep(1);
    
    std::cout<< "Done" << std:: endl;
    fflush(stdout);
    
    
    
    return 0;
}
