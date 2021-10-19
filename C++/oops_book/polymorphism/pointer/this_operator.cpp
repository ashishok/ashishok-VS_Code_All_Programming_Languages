#include<iostream>
#include<cstring>
using namespace std;

class person
{
     char name[20];
     float age;
     public:
    person(char *s, float a)
    {
        strcpy(name,s);
        age=a;
    }
    person & person ::greater(person &x)
    {
        if(x.age >= age)
        return x;
        else 
        return *this;
    }
    void display()
    {
        cout<<" name "<<name<<endl<<" age"<<age<<endl;
    }
};

int main()
{
person P1("ashish",1.2),
    P2("ashis",2.2),
        P3("avinash",3.3);
person P = P1.greater(P3);
cout<<"elder person is : ";
P.display();
 P = P1.greater(P2);
cout<<"elder person is : ";
P.display();

return 0;
}