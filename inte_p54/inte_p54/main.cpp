
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <array>

#include <iterator>

int main()
{
    //review of fundmental
    
    /*
     要素の数が欲しい → .size()（ただし、クラス型に限る）
     メモリサイズが欲しい → sizeof()
     文字列の長さが欲しい → strlen()
     */
    
    
    //int startPoint = 0;
    const char name1[] ="ABCDEF";
    //生配列はsizeofで割り算する
    //std::array,std::vectorの時は.size()
    //char配列の時はstrlen（配列）で\0無しのものを出力
    //char配列の時はsizeof（配列）で\0ありのものを出力
    
    
    size_t length1 = strlen(name1); // \0 is not included
    std:: cout << length1 << std:: endl;
    size_t length1_b = sizeof(name1);//  \0 is included
    std:: cout << length1_b << std:: endl;
    
    std::array<int,5> name2 ={1,2,3,4,5};
    size_t length2 = name2.size();
    std:: cout << length2 << std:: endl;
    
    std::array<int,7> name3 = {'a','b','c','d','e','f','g'};
    size_t length3 = name3.size();
    std:: cout << length3 << std:: endl;
    
    
    int arr[]={1,2,3,4,5,6};
    size_t size = sizeof(arr) / sizeof(arr[0]); //after declaration of array
    std:: cout << size << std:: endl;
  
    //iterator
    int name4[] ={1,2,3,4};
    size_t length4 = std::size(name4);
    std:: cout << length4 << std:: endl;
    
    return 0;
}
