#include<iostream>
using namespace std;
int main()
{
enum class season{summer,spring,fall,winter};
season now = season::winter;
switch(now)
{
     case season::summer:
       break;
     case season::spring:
     break;
     case season::fall:
     break;
     case season::winter:
     cout<<" stay warm";
     break;
}

return 0;
}