#include <iostream>
using namespace std;
int main()
{
    int a,i;
    string b;
    cin>> a;
    for (i=0; i<a; i++)
    {
        cin >> b;
        if(b.length()==3)
        {
            if(b[0]=='o'&&b[1]=='n')
            {
                cout << 1 << endl;
            }
            else if(b[0]=='o'&&b[2]=='e')
            {
                cout << 1 << endl;
            }
            else if(b[1]=='n'&&b[2]=='e')
            {
                cout << 1 << endl;
            }
            else if(b[0]=='t'&&b[1]=='w')
            {
                cout << 2 << endl;
            }
            else if(b[0]=='t'&&b[2]=='o')
            {
                cout << 2 << endl;
            }
            else if(b[1]=='w'&&b[2]=='o')
            {
                cout << 2 << endl;
            }
        }
        else if(b.length()==5)
        {
            if (b[0]=='t'&&b[1]=='h'&&b[2]=='r'&&b[3]=='e')
            {
                cout << 3 << endl;
            }
            else if (b[0]=='t'&&b[1]=='h'&&b[2]=='r'&&b[4]=='e')
            {
                cout << 3 << endl;
            }
            else if (b[0]=='t'&&b[1]=='h'&&b[3]=='e'&&b[4]=='e')
            {
                cout << 3 << endl;
            }
            else if (b[0]=='t'&&b[2]=='r'&&b[3]=='e'&&b[4]=='e')
            {
                cout << 3 << endl;
            }
            else if (b[1]=='h'&&b[2]=='r'&&b[3]=='e'&&b[4]=='e')
            {
                cout << 3 << endl;
            }
        }
    }
}
