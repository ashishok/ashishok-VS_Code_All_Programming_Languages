#include<iostream>
#include<fstream>
using namespace std;
int main()
{

ofstream outfile("ITEMS");          //connect item file to outfile

cout<<"enter the items name: ";
char name[30];
cin>>name;                                  // get  name from keyboard and 

outfile<<name;                          // write file to the item 

cout<<"enter the item costs : ";
float cost;
cin>>cost;                      // get cost from the keyboard and

outfile<<cost<<endl;            //  write to file item 

outfile.close();                    // disconnect ITEM file from the  outfile

ifstream infile("ITEMS");           // connect item file to infile

infile >> name;                    // read name from the file ITEM
infile >> cost;                 // read cost from the file ITEM

cout<<'\n';
cout<<"item name: "<<name<<"\n";
cout<<"item cost: "<<cost<<"\n";

infile.close();         // disconnects ITEM from infile

return 0;
}