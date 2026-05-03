#include <iostream>
using namespace std;

class Items
{
private:
    int itemCode;
    string itemName;
    float price;

public:
    void getData()
    {
        cout << "Enter Item Code: ";
        cin >> itemCode;

        cout << "Enter Item Name: ";
        cin >> itemName;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayData()
    {
        cout << "\nItem Details:" << endl;
        cout << "Item Code: " << itemCode << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Items obj;
    obj.getData();
    obj.displayData();

    return 0;
}