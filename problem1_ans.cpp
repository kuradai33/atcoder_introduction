#include <iostream>
#include <string>

int main(){
    // 変数を宣言する
    int X, rest;

    // 入力する
    std::cin >> X;

    // 処理を行う
    if(X < 40){ // 0 <= X && X < 40 でも可
        rest = 40 - X;
    }
    else if(X < 70){ // 40 <= X && X < 70 でも可
        rest = 70 - X;
    }
    else if(X < 90){ // 70 <= X && X < 90 でも可
        rest = 90 - X;
    }
    
    // 結果を出力する
    if(X < 90){ // 0 <= X && X < 90 でも可
        std::cout << rest << std::endl;
    }
    else{
        std::cout << "expert" << std::endl;
    }
}
