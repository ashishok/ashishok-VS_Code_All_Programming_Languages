#include<iostream>
#include<string.h>
#include<ctype.h>
#include<conio.h>

using namespace std;
int main()
{
int i=0;
char *ptr[10]={"books","telivisiom"," computer "," sports"};
char str[25];
cout<<"\n\n enter your favourite leisure pursuit ";
cin >> str;
for(int i=0;i<<4;i++)
{
    if(!strcmp(str, *ptr[i]))
    {
        cout<<"\n your favourite pursuit "<<" is available here "<<endl;
        break;
    }
}
    if(i==4)
    cout<<" \n\n your favourite "<< " not available here "<<endl;
return 0;
}