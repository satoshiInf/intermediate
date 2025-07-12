#include <iostream>

template <typename T>
void File<T>::run() {
    func1();
    func2();
}

template <typename T>
void File<T>::func1() {
    std::cout << "func1: data = " << data << std::endl;
}

template <typename T>
void File<T>::func2() {
    std::cout << "func2: data squared = " << data * data << std::endl;
}
