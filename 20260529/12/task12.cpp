#include <iostream>>
using namespace std;

int main() {
    
    const double TAX_RATE = 0.10;
    const int NORMAL_PRICE = 200;
    const int MEMBER_PRICE = 150;

    int normal_tax = NORMAL_PRICE * TAX_RATE;
    int normal_total = NORMAL_PRICE + normal_tax;

}