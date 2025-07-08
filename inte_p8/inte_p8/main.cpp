/*
 問題文：
 0〜9 の整数の中から、あらかじめ決められた「正解の数（答え）」をユーザーに当てさせるプログラムを作成してください。
 🔽 条件：
 正解の数は 7 とする（今回は固定）
 ユーザーに「いくつかな？」と問いかけ、整数の入力を受け付ける
 入力された数が正解より大きければ「もっと小さいですよ！」と表示
 入力された数が正解より小さければ「もっと大きいですよ！」と表示
 正解なら「正解です！」と表示
 入出力には printf と scanf を使用する
 入力された数値は int 型で扱うこと

 */


#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
//正解の数は 7 とする（今回は固定）
    int answer = 7;
    int inputNum = 0;
//ユーザーに「いくつかな？」と問いかけ、整数の入力を受け付ける
    cout << "いくつかな？" << endl;
 
    while( inputNum != answer)
    {
        cin >> inputNum ;
        if(cin.fail() )
        {
            cin.clear();
            cin.ignore(100,'\n');
            continue;
        }
        
        //入力された数が正解より大きければ「もっと小さいですよ！」と表示
        if(inputNum < answer)
        {
            cout << "もっと小さいですよ！" << endl;
        }
        // 入力された数が正解より小さければ「もっと大きいですよ！」と表示
        else if( inputNum > answer  )
        {
            cout << "もっと大きいですよ！" << endl;
        }
    }
    
        cout << "正解です！" << endl;
    
    
    return 0;
}
