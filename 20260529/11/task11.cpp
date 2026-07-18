#include <iostream>
using namespace std;

    struct Define
    {
        static constexpr double TAX_RATE = 0.10;
    };

    int main() {
        int price = 1500;
    
        int tax = price * Define::TAX_RATE;  
        int total = price + tax;    

        cout << "定価    : " << price << " 円" << endl;
        cout << "消費税: " << tax << " 円" << endl;
        cout << "合計金額: " << total << " 円" << endl;

        return 0;
    }