#pragma once

template <typename T>
class File {
public:
    void run();

private:
    void func1();
    void func2();

    T data;  // 例としてメンバ変数
};

// 実装をここでインクルードする
#include "File.tpp"
