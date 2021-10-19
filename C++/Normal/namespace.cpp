#include<iostream>
using namespace std;

namespace gate
{
    void print_array(const int data[],int size)
    {
        for (int i=0;i<size;i++)
        {
            cout<<data[i]<<"\t";
        }
        cout<<"\n";
    }

}





int main()
{
int data[] = {12,43,56,67,34};
gate::print_array(data,5);
cout<<data[0]<<endl;
return 0;
}