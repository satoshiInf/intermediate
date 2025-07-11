//
//  main.cpp
//  inte_p44
//
//  Created by Satoshi on 7/11/25.
//

#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>

int sleepSecond(int time)
{
    std::this_thread::sleep_for(std::chrono::seconds(time));
    return time;
}

int main()
{
    for(int i  = 10 ; i > 0 ; i--)
    {
        /*
        printf("\r %2d", i);
        fflush(stdout);
        sleep(1);
         */
        
        std::cout <<"\r"<< std::setw(2)<< i << std::flush;
        sleepSecond(1);
    }
    
    std::cout << "\rFIRE" << std:: endl;
    
    return 0;
}
