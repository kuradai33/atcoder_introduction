#include <iostream>
#include <string>

int main(){
    // 変数を宣言する
    int a, b, c;
    std::string s;
    
    // 入力する
    std::cin >> a >> b >> c >> s;
    
    // 処理を行う
    int sum = a + b + c;
    
    // 結果を出力する
    std::cout << sum << " " << s << std::endl;
}
