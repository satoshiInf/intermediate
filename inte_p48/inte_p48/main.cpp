
#include<time.h>

#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    time_t start = time(NULL);
    std::cout << start << std::endl;
    
    std::this_thread::sleep_for(std::chrono::seconds(2));
    

    time_t end = time(NULL);
    std::cout << end << std::endl;
    
    
    double requireTime = difftime(end, start);
    std::cout << requireTime << std::endl;
    

    return 0;
}
