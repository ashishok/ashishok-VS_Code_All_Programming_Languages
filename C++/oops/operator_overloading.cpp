#include<iostream>
using namespace std;

class position
{
    public:
    int x=10;
    int y=20;
    position operator + (position pos)
    {
         
         position new_pos;
          new_pos.x = x + pos.x;
          new_pos.y = y + pos.y;
          return new_pos;
    }
};



int main()
{
    position pos1,pos2;
   position pos3 = pos1 + pos2;
   cout<<pos3.x<<" "<<pos3.y<<endl;
   
return 0;
}