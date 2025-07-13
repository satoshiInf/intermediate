//
//  main.cpp
//  inte_p48_2
//
//  Created by Satoshi on 7/12/25.
//

#include <iostream>
#include <ctime> // time()
#include <unistd.h> //sleep()

int main()
{
    time_t start = time(NULL);
    std::cout << start << std:: endl;
    
    sleep(2);
    
    time_t end = time(NULL);
    std::cout<< end << std::endl;
    
    double diff = difftime(end, start);
    std:: cout << diff << std ::endl;
    
    
    return 0;
}
