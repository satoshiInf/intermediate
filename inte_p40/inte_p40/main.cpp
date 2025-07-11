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
    //string.lenth should be managed to ensure that string1.lengh > string2.length
    std::cout<< "Hello   " << "\r" ;
    fflush(stdout);
    sleep(1);
    
    std::cout<< "Loading " << "\r";
    fflush(stdout);
    sleep(1);
    
    std::cout<< "Done    "  << std::endl;
    fflush(stdout);
    
    return 0;
}
