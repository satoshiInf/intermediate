/*
 
 # じゃんけんゲームの仕様・動作指示

 ---

 ## 1. プログラムの目的

 * コンピュータと人間がじゃんけんをする対戦ゲーム。
 * コンピュータはランダムに「グー」「チョキ」「パー」を選ぶ。
 * 人間はキーボードから「0（グー）」「1（チョキ）」「2（パー）」のいずれかを入力する。
 * 勝敗を判定して結果を表示する。
 * 勝負後、もう一度やるかどうかを聞き、続けるなら繰り返す。

 ---

 ## 2. プログラムの動作手順

 1. プログラム起動時に乱数の種を初期化する。
 2. 「じゃんけん開始!!」というメッセージを表示。
 3. 1ゲーム毎に次を行う。

    * コンピュータが 0〜2 の乱数を生成。（0=グー、1=チョキ、2=パー）
    * ユーザーに「グー(0)、チョキ(1)、パー(2)のいずれかを入力してください」と促す。
    * 入力を受け取り、整数として取得する。
    * コンピュータの手を表示する。（グー、チョキ、パーのどれか）
    * 勝敗判定をする。判定ルールは以下：

      * `(human - comp + 3) % 3 == 0` → 引き分け
      * `(human - comp + 3) % 3 == 1` → ユーザーの勝ち
      * `(human - comp + 3) % 3 == 2` → コンピュータの勝ち
    * 判定結果を表示する。
    * 「もう一度遊びますか？ 0=いいえ 1=はい」と聞き、1ならゲーム続行、0なら終了。

 ---

 ## 3. 注意事項

 * 入力値が 0〜2 の整数であることを前提としている。
 * 不正な入力に対するエラーチェックは省略可能。
 * `%` 演算による勝敗判定の意味は、円環的な比較（モジュロ演算）を利用している。
 * 乱数の初期化は `srand(time(NULL))` で行う。

 ---

 ## 4. 変数の役割説明

 | 変数名     | 役割                                 |
 | ------- | ---------------------------------- |
 | `comp`  | コンピュータがランダムに選んだ手（0〜2）              |
 | `human` | ユーザーが入力した手（0〜2）                    |
 | `judge` | 勝敗判定の計算結果 `(human - comp + 3) % 3` |

 ---

 ## 5. まとめ

 * 乱数でコンピュータの手を決める。
 * ユーザー入力を受ける。
 * 勝敗判定は `(ユーザーの手 - コンピュータの手 + 3) % 3` で判定。
 * 結果を表示。
 * 繰り返しの実装。

 ---

 この指示のとおりにプログラムを書くと、あなたの示したコードの動作内容と合致します。
 もしこれをもとにコメント付きでコードを作り直したい場合も言ってくださいね！

 */
#include <iostream>
#include <time.h> //time
#include <stdlib.h>

int main()
{
    srand((unsigned int)time(NULL) );
    int input;
    int ranNum =0;
    
    //使う変数はdowhileで定義しておき、＝０で初期化しておく
    int modInput=0;
    int modRandomNum =0;
    
    //int result ;
    int modResult =0;

    do
    {
        
    
        //user
        printf("Input number\n");
        scanf("%d", &input);
        printf("you input %d\n", input);
        
        modInput = ( ( input % 3 ) + 3 ) % 3;
        
        printf("\n you choose:");
        switch(modInput)
        {
            case 0: printf("\n : Rock\n");
                break;
            case 1: printf("\n : Scissor\n");
                break;
            case 2: printf("\n : Paper\n");
                break;
        }
        
        ranNum = rand();
        printf("\n computer chooses:\n");
        modRandomNum = ((ranNum % 3 )+ 3) % 3;
        
        switch(modRandomNum)
        {
            case 0: printf("\n : Rock\n");
                break;
            case 1: printf("\n : Scissor\n");
                break;
            case 2: printf("\n : Paper\n");
                break;
        }
        
       
        printf("calcuration\n");
        /*
         user - comp
         user[0] computer[0] -> 0 per
         user[1] computer[0] -> 1 lose
         user[2] - computer[0] ->2 win
         
         user - comp
         user[0] computer[1] -> -1 win ... mod 2
         user[1] computer[1] -> 0 per
         user[2] - computer[1] ->1 lose
         
         user - comp
         user[0] computer[1] -> -1 win ... mod 2
         user[1] computer[1] -> 0 per ...mod 0
         user[2] - computer[1] ->1 lose ...1
         */

        int result = modInput- modRandomNum;
        int modResult = ( (result% 3)+ 3 )% 3;
        
        if(modResult == 0)
        {
            printf("You draw, Retry,\n");
        }
        else if(modResult == 1)
        {
            printf("You lose. Retry,\n");
        }
        else
        {
           // win
            break;
        }
        
    }
    while( modResult !=2);
        
        printf("You win. The game is over,\n");
        
        
    return 0;
}
