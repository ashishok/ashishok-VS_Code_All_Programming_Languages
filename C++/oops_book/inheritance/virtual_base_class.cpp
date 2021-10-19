#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number()
    {
        cout << " roll number = " << roll_number << endl;           
    }
};




class test : virtual public student       // virtual or public may be eithe in any order 
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks()
    {
        cout << " marks obtained :-" << endl;
        cout << " part1 =" << part1 << endl;
        cout << " part2 =" << part2 << endl;
    }
};




class sports : public virtual student     // virtual or public may be eithe in any order 
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score()
    {
        cout << " score wt = " << score << endl
             << endl;
    }
};




class result : public test, public sports
{
    float total;

public:
    void display();
};

void result::display()
{
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();
    cout << " total score = " << total << endl;
}




int main()
{
    result student_1;
    student_1.get_number(678);
    student_1.get_marks(30.5, 27.5);
    student_1.get_score(7.0);
    student_1.display();

    return 0;
}