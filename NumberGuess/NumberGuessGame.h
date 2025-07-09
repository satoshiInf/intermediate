//クラスや関数の"名前だけ"
#pragma once
#include <vector>

class NumberGuessGame {
public:
    void run();  // 全体を動かす

private:
    void initialize();     // ゲーム準備
    void play();           // ユーザーとのやりとり
    void showRecords() const; // 履歴表示

    int randomNumber;         // 正解
    std::vector<int> guesses; // 入力履歴
};
