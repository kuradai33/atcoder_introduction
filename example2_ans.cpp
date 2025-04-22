#include <iostream>
#include <string>

int main(){
    // 変数を宣言する
    int N, M, A[10] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    int max_border;

    // 入力する
    std::cin >> max_border;

    // 処理を行う
    int left = 0, right = 10; // 範囲の左端と右端を設定
    while(right - left > 1){ // 二分探索
        int mid = (left + right) / 2; 
        if(A[mid] <= max_border){
            left = mid;
        }
        else{
            right = mid;
        }
    }

    // 結果を出力する
    if(A[left] <= max_border){
        std::cout << A[left] << std::endl;
    }
    else{
        std::cout << "条件を満たす値がありません" << std::endl;
    }
}
