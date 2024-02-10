#include <iostream>
#include <string>
using namespace std;
class khushi
{
    string c;

public:
    void takedata(void);
    void chk_stg(void);
    void change(void);
};
void khushi ::takedata()
{
    cout << "Enter any binary no. here" << endl;
    cin >> c;
}
void khushi ::chk_stg()
{
    for (int i = 0; i < c.length(); i++)
    {
        if (c.at(i) != '0' && c.at(i) != '1')
        {
            cout << "you enter wrong binary number" << endl;
            exit(0);
        }
    }
}
void khushi ::change()
{
    for (int i = 0; i < c.length(); i++)
    {
        if (c.at(i) != '1')
        {
            c.at(i) = '1';
        }
        else 
        {
            c.at(i) = '0';
        }
    }
        cout <<"the change binary nomber is "<< c<<endl;
}
int main()
{
    khushi shekhar;
    shekhar.takedata();
    shekhar.chk_stg();
    shekhar.change();
    return 0;
}