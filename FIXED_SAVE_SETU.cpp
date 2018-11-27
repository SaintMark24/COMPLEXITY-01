#include <iostream>
using namespace std;
int main()
{
    int a,c,d=0,i;
    string b;
    cin >> a;
    while(a>0)
    {
        cin >> b;
        if (b=="donate")
        {
            cin >> c;
            d+=c;
        }
        else if (b=="report")
        {
            cout << d << endl;
        }
        a--;
    }

}
