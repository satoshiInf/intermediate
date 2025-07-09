/*
ヘッダーは目次である　
一連の関数と全体で使う変数を書くが内容は書かない。
クラス.cppは関数の中身を書く。
関数ないだけで使う変数はここにconstexprnirに記載する。
mainはクラスインスタンスの生成、インスタンス名run()のみである
*/


/*
main()からスタートで
オブジェクト→ instance.run();
NumberGuessGame.cppが呼ばれ
game.run（）実行→各種関数の実行

headerは
main.cpp->instance.cppの橋渡しの役割
使う関数とメンバー変数を書く

*/

// 実行のスタートだけを書く
#include "NumberGuessGame.h"

int main() 
{
    NumberGuessGame game;
    game.run();
    return 0;
}
