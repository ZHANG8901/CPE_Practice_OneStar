/* 00100 - The 3n + 1 problem */
/* 2023.01.23 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d ",&n)!=EOF){       //這行還是沒很懂 為啥沒加!=EOF就變無限迴圈ㄌ 現在做ㄉ不是題目要ㄉ兩個變數ㄉ   先練習單變數   
        while(n!=1){
            if(n%2==1){                 //奇數
                n=n*3+1;
                printf("%d ",n);
            }  
            else{                       //偶數
                n=n/2;
                printf("%d ",n);
            }
        }
        printf("%d ",n);
    }
    return 0;
}
