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
    long long int sumA = 0;
    for(int i = 0; i < N; i++){
        sumA = sumA + A[i];
    }
    // 二分探索
    long long int left = 0, right = 1000000001;
    while(right - left > 1){
        long long int mid = (left + right) / 2;

        long long int sum = 0;
        for(int i = 0; i < N; i++){
            int min;
            if(mid < A[i]){
                min = mid;
            }
            else{
                min = A[i];
            }
            sum = sum + min;
        }

        if(sum <= M){
            left = mid;
        }
        else{
            right = mid;
        }
    }

    // 結果を出力する
    if(sumA > M){ // 答えが有限の場合
        std::cout << left << std::endl;
    }
    else{ // 答えを無限に大きくできる場合
        std::cout << "infinite" << std::endl;
    }
}
