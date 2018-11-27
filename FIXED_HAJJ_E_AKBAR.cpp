#include <iostream>
using namespace std;
int main()
{
    int i,a=1000000;
    string b;
    for (i=1; i<=a; i++)
    {
        cin >> b;
        if (b=="Hajj")
        {
            cout << "Case " << i << ": Hajj-e-Akbar" << endl;
        }
        else if (b=="Umrah")
        {
            cout << "Case " << i << ": Hajj-e-Ashgar" << endl;
        }
        else if (b=="*")
        {
            return 0;
        }
    }
}
