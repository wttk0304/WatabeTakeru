#include <iostream>>
using namespace std;

int main()
{

    const double TAX_RATE = 0.10;
    const int NORMAL_PRICE = 200;
    const int MEMBER_PRICE = 150;

    int normal_tax = NORMAL_PRICE * TAX_RATE;
    int normal_total = NORMAL_PRICE + normal_tax;

    int member_tax = MEMBER_PRICE * TAX_RATE;
    int member_total = MEMBER_PRICE + member_tax;

    cout << " 通常価格 " << endl;
    cout << "定価    : " << NORMAL_PRICE << " 円" << endl;
    cout << "消費税額: " << normal_tax << " 円" << endl;
    cout << "合計金額: " << normal_total << " 円" << endl;
    cout << endl;

    cout << " 会員価格 " << endl;
    cout << "定価    : " << MEMBER_PRICE << " 円" << endl;
    cout << "消費税額: " << member_tax << " 円" << endl;
    cout << "合計金額: " << member_total << " 円" << endl;

    return 0;
}