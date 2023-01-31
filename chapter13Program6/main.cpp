#include <iostream>
using namespace std;
//如何设置constructor 2

class Inventory{
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

    public:
    Inventory(){
        itemNumber=0;
        quantity=0;
        cost=0;
        totalCost=0;
    }
    Inventory(int a, double b, int c){
        itemNumber=a;
        cost=b;
        quantity=c;
        setTotalCost();
    }
    void setTotalCost(){
        totalCost=quantity*cost;
    }
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
