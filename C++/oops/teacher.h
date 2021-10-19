#ifndef TEACHER
#define TEACHER

#include<vector>
#include<string>
#include<iostream>
// #include"user.h"

class Teacher : public User
{
    public :
    vector<string>classes_teaching;
    void output();
};

#endif