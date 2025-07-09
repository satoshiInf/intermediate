//	中身（処理内容）を書く

#include "NumberGuessGame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

constexpr int MAX_ATTEMPTS = 3;
constexpr int MIN = 1;
constexpr int MAX = 9;

void NumberGuessGame::run() 
{
    initialize();
    play();
    showRecords();
}

void NumberGuessGame::initialize() 
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    randomNumber = MIN + std::rand() % (MAX - MIN + 1);
    guesses.assign(MAX_ATTEMPTS, -1);
}

void NumberGuessGame::play() 
{
    int input;
    for (int i = 0; i < MAX_ATTEMPTS; ++i) {
        std::cout << "Guess a number: ";
        std::cin >> input;
        guesses[i] = input;

        if (input == randomNumber) {
            std::cout << "You win!\n";
            return;
        } else if (input < randomNumber) {
            std::cout << "Too small!\n";
        } else {
            std::cout << "Too big!\n";
        }
    }
}

void NumberGuessGame::showRecords() const 
{
    std::cout << "Your guesses:\n";
    for (int i = 0; i < guesses.size(); ++i) {
        if (guesses[i] != -1) {
            std::cout << i + 1 << ": " << guesses[i] << "\n";
        }
    }
}
