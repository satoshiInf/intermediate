/*
 ■問題：
 

 乱数を使って、ユーザーが「もう一度試すかどうか」を選べるCプログラムを作成してください。以下の条件をすべて満たしてください。
 ■条件：
 乱数の生成には srand() に改修する

 最初に、使用する乱数の最大値（RAND_MAX）を printf を使って表示すること。
 乱数を1個生成し、画面に出力する。
 その後、ユーザーに次の質問を行う：
 　「もう一度やりますか？（0: いいえ / 1: はい）」
 ユーザーが 1 を入力した場合、乱数生成→質問を繰り返す。
 ユーザーが 0 を入力したらプログラムを終了する。
 すべての入出力には printf と scanf を使うこと。
 int 型の変数を使ってユーザーの入力を受け取ること。
 
 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int input;
    srand((unsigned int)time(NULL));
    printf("生成する\n",RAND_MAX);
    printf("生成されたものは%d\n",rand());
    
    do
    {
        printf("入力する\n");
        scanf("%d", &input);
    }
    while (input == 1);
    
    printf("0は終了");
   
    
    return 0;
}


/*
int inputNum;

srand(time(NULL));
printf("乱数%dを生成する:\n ", RAND_MAX);
printf("%d,\n", rand());

do
{
    printf("1か0を入力: 1は再度入力、0は終了 \n");
    scanf("%d", &inputNum);
}
while (inputNum == 1 );

printf("0なので終了");

*/
