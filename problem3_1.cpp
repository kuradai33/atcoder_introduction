#include <iostream>
#include <string>

int main(){
    // 変数を宣言する
    long long int N, M, A[200000];

    // 入力する
    std::cin >> N >> M;
    for(int i = 0; i < N; i++){
        std::cin >> A[i];
    }

    // 処理を行う
    /* 答えが"infinite"かどうか判定するのに必要な計算を行う */
    // 二分探索
    long long int left = /* 答えとしてあり得る値の最小値 */, right = /* 答えとしてあり得る値の最大値+1 */;
    while(right - left > 1){
        long long int mid = (left + right) / 2;

        /* 条件式で使用する計算を行う */

        if(/* 問題の条件を満たす場合の条件式 */){
            left = mid;
        }
        else{
            right = mid;
        }
    }

    // 結果を出力する
    if(/* 答えが有限の場合の条件式 */){ // 答えが有限の場合
        std::cout << /* 答えが入っている変数 */ << std::endl;
    }
    else{ // 答えを無限に大きくできる場合
        std::cout << "infinite" << std::endl;
    }
}
