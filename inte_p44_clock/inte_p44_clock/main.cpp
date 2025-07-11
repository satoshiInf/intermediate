

#include <iostream>

#include<time.h>
#include<stdio.h>

#include<time.h> // clock()
#include<iomanip> //setw, setprecision

#include<chrono>
#include<thread>


void sleep(unsigned long clockNUmber)
{
   std::this_thread::sleep_for(std::chrono::duration<double>(clockNUmber));

}

void version1()
{
    // version 1
    clock_t start = clock();
    std::cout << start<<"clock count" <<std::endl;
    
    for(int i =0 ; i < 5 ; i++)
    {
        printf("\r%2d", i);
        fflush(stdout);
        sleep(1);
        
    }
    clock_t end = clock();
    std::cout << end <<"clock count" <<std::endl;
    
    double timeSecond =static_cast<double>(end - start)/CLOCKS_PER_SEC;
    
    //the second is wrong. while the for-loop, cpc does not run at all.
    std::cout << std::fixed << std::setprecision(10)<< timeSecond <<"seconds" <<std::endl;
    
}

void version2()
{
    auto start = std::chrono::steady_clock::now();
    //std::this_thread::sleep_for(std::chrono::seconds(3));\
    
    for(int i =0 ; i < 5 ; i++)
    {
        printf("\r%2d", i);
        fflush(stdout);
        sleep(1);
        
    }
    
    auto end = std::chrono::steady_clock::now();
    
    std::chrono::duration<double> exactTime = end - start;
    std::cout << std::fixed << std:: setprecision(10) << "\n"<<exactTime.count() <<"seconds"<< std::endl;
    
}

int main()
{
    //we cannot trust clock()
    //version1();
    
    //instead we should use chrono
    version2();
    
    
    
    return 0;
}
