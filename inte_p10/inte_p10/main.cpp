#include <iostream>
#include <stdio.h>



using namespace std;

int main()
{
    int answer = 7;
    int inputNum = 0;

    //while(true)で固定する

    while (true)
    {
        printf("いくつかな: ");
        scanf("%d", &inputNum);
        
        if (inputNum < answer)
        {
            printf("もっと大きいですよ！\n"); // 修正済み
        }
        else if (inputNum > answer)
        {
            printf("もっと小さいですよ！\n"); // 修正済み
        }
        else
        {
            printf("正解です！！\n");
            break;
        }
        
    }



    return 0;
}
