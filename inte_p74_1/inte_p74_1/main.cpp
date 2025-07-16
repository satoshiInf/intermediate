// Ç∑Ç◊ÇƒÇÃï∂éöÇ∆16êiÇÃï∂éöÉRÅ[ÉhÇï\é¶

#include <ctype.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
    //CHAR_MAXは127の定数
    for (int i = 1; i <= CHAR_MAX; i++) {
        switch (i) {
         default : printf(" %c", isprint(i) ? i : ' ');//isprint(i) ? i : ' 'の結果をcに代入する
        }
        printf(" %02X\n", i); // iを16進数に変換して表示
    }

    return 0;
}
