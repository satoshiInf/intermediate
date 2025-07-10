//
//  main.cpp
//  aarray_size
//
//  Created by Satoshi on 7/10/25.
//

#include <iostream>


int main()
{
    int arr[] ={1,2,3,4,5};
    int elements = sizeof(arr)/sizeof(arr[0]);
    
    std::cout << elements << std::endl;
    printf("show each elements\n");
    for(int i = 0; i < elements; i++)
    {
        std::cout << "arr["<< i << "]" << "=" << arr[i] <<std::endl;
    }
    
    
    for(int i = 0; i < elements; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    return 0;
}
