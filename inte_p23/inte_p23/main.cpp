#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//#define MAX_STAGE 10

int main()
{
    srand((unsigned int)time(NULL));
    int RandomNum = rand()% 1000;
    
    printf("generate number\n");
    printf("Number created is %d \n",RandomNum );
    
    const int max = 3;
    //int inputNum[MAX_STAGE];
    int num[max];
    int attempts = 0;
    
    /*
    for(int i = 0 ; i < max ; ++i)
    {
        num[i] = -1;
    }
     */
    
    do
    {
        
        printf("you can do %d times\n", max - attempts);
        printf("input\n");
        scanf("%d", &num[attempts]);
        printf("you input %d \n", num[attempts]);
        
        if(attempts < max && num[attempts] > RandomNum )
        {
            //input-big
            printf("too big\n");
            
        }
        else if(attempts < max && RandomNum > num[attempts])
        {
            //input-small
            printf("too small\n");
        }
        else
        {
            //equal
            printf("you correct\n");
            break;
        }
        
            attempts++;
        
    }
    //attempts is already incremented so, num[attempts -1]!= RandomNum
    while(max - attempts> 0 && num[attempts -1]!= RandomNum );
    
    
    // if fail
    if(attempts == max)
    {
        printf("failed\n");
        printf("the answer is %d\n", RandomNum);
        for(int i = 0; i < attempts; i++ )
        {
            int done = i + 1;
            printf("%d : %d %d\n",done, num[i], abs(RandomNum - num[i]) );
        }
    }
    else
    {
        printf("suceed\n");
    }
    
}



/*

## 🎯 目的

> ユーザーに0～999の乱数を当てさせるゲームを完成させる。
> 入力履歴を記録し、最後にすべて表示する機能を含める。

---

## 📝 設問：数字当てゲームの実装ステップ

---

### 🔹 Step 1: 乱数生成

> **Q1.** 以下の条件を満たすC言語のコードを記述しなさい：

* 実行のたびに異なる乱数を生成する
* 0～999の範囲の乱数を1つ生成して変数 `ans` に代入する

💡 ヒント：`srand()` と `rand()` を使います

---

### 🔹 Step 2: 入力受付と記録

> **Q2.** ユーザーからの数字入力を `MAX_STAGE` 回まで受け付け、
> そのたびに入力値を配列 `num[]` に記録してください。

* ユーザーが入力するたびに `num[stage] = 入力値;` とし、 `stage` を1増やすこと

---

### 🔹 Step 3: ヒントを表示

> **Q3.** ユーザーの入力 `no` に対して、以下の条件で表示を切り替えなさい：

* 入力値 `no` が `ans` より大きければ → 「もっと小さいよ」と表示
* 入力値 `no` が `ans` より小さければ → 「もっと大きいよ」と表示
* 合っていれば → 「正解です！」と表示し、ループを終了

---

### 🔹 Step 4: 最大試行回数までループ

> **Q4.** ユーザーの入力が正解か、または `MAX_STAGE` 回までに正解しなかった場合にループを終了する条件を書いてください。

* `do-while` ループを使い、次の条件で継続させる：

```c
(no != ans && stage < MAX_STAGE)
```

---

### 🔹 Step 5: 結果の表示

> **Q5.** 最後に以下の情報を表示するコードを書いてください：

* ユーザーが正解したかどうか
* 正解できなかった場合は、答えを表示
* 今までに入力したすべての履歴を以下の形式で表示：

```plaintext
 1 :  500  -200
 2 :  700   +0
```

* この表示では：

  * 1回目は `500` を入力して正解との差が `-200`
  * 2回目は `700` を入力して正解との差が `+0`（＝正解）

---

### 🔹 Step 6: 全体統合（上記をmain関数でまとめる）

> **Q6.** 上記のすべてを `main()` 関数内に統合して、完成形のゲームプログラムを作成しなさい。

---

## 🎓 総仕上げ問題

> **Q7.** 以下の要件を満たすように、コードを自分で1から書いてください：

* ゲーム開始時に0～999の乱数を1つ生成する
* ユーザーに最大10回まで数字を入力させる
* 入力するたびにヒントを表示する（大きい・小さい）
* 入力履歴を記録し、最後にすべて表示する

---

## ✅ 備考

この問題により、以下の基礎力が養えます：

| スキル      | 内容                           |
| -------- | ---------------------------- |
| 制御構文     | `do-while`, `if`, `for`      |
| 配列       | 入力履歴の保存と出力                   |
| 乱数処理     | `srand()` + `rand()` の初期化と生成 |
| フォーマット出力 | `printf` での整形表示              |
| 実装順序の論理  | 機能の積み上げ順を理解できる               |

---

必要であれば、この問題用の\*\*ワークシート（PDF形式）\*\*も作成できますし、**採点基準表**も作れます。どうしましょうか？

*/
