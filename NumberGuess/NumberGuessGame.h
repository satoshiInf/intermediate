#pragma once

//class.h

class NumberGuessGame
{
    public:
    void run();

    private:
    void generateRanNum();
    void getUserInputNum();
    void showResult();

    
    int randomNum;
    int attempts = 0;
    static constexpr int MAX = 3;
    int inputNum[MAX];
    bool isCorrect = false;

};
