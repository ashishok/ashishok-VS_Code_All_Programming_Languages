#include <iostream>
using namespace std;

class invent2;
class invent1
{
    int code, item;
    float price;

public:
    invent1(int a, int b, float c)
    {
        code = a;
        item = b;
        price = c;
    }
    void putdata()
    {
        cout << " code :" << code << endl;
        cout << " item :" << item << endl;
        cout << " price :" << price << endl;
    }
    int getcode()
    {
        return code;
    }
    int getitem()
    {
        return item;
    }
    float getprice()
    {
        return price;
    }
    operator float()
    {
        return (item * price);
    }

    /* operator invent2()     //invent1 to invent2
    {
        invent2 temp;
        temp.code = code;
        temp.value = price*item;
        return temp;
    }   */
}; // ending of source class

class invent2
{
    int code;
    float value;

public:
    invent2()
    {
        code = 0;
        value = 0;
    }
    invent2(int x, float y)
    {
        code = x;
        value = y;
    }
    void putdata()
    {
        cout << "code :" << code << endl;
        cout << "value :" << value << endl;
    }
    invent2(invent1 p)
    {
        code = p.getcode();
        value = p.getitem() * p.getprice();
    }
};

int main()
{
    invent1 s1(100, 5, 140.0);
    invent2 d1;
    float total_value;
    /* invent1 to float */
    total_value = s1;
    /*invent1 to invent2*/
    d1 = s1;
    cout << "product details - invent1 tpye " << endl;
    s1.putdata();
    cout << "\n stock value " << endl
         << endl;
    cout << "value =" << total_value << "\n\n";
    cout << "products details - invent2 type" << endl;
    d1.putdata();

    return 0;
}