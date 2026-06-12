#include <iostream>
using namespace std;

int main() {
    int price = 1500;            
    double tax_rate = 0.10;      
    
    // 計算処理
    int tax = price * tax_rate;  
    int total = price + tax;    

    // 結果を出力
    std::cout << "定価    : " << price << " 円" << std::endl;
    std::cout << "消費税: " << tax << " 円" << std::endl;
    std::cout << "合計金額: " << total << " 円" << std::endl;

    return 0;
}