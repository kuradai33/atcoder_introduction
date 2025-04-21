#include <iostream>
#include <string>

int main(){
    // 変数を宣言する
    int N, R, D[100], A[100];

    // 入力する
    std::cin >> N >> R;
    for(int i = 0; i < N; i++){
        std::cin >> D[i] >> A[i];
    }

    // 処理を行う
    int now_rating = R;
    for(int i = 0; i < N; i++){
        if(D[i] == 1){
            if(1600 <= now_rating && now_rating <= 2799){
                now_rating = now_rating + A[i];
            }
        }
        else{
            if(1200 <= now_rating && now_rating <= 2399){
                now_rating = now_rating + A[i];
            }
        }
    }

    // 結果を出力する
    std::cout << now_rating << std::endl;
}
