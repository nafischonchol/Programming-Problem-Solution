#include <iostream>
using namespace std;
 
int main()
{
    int a, fav, b;
    cin >> a >> fav >> b;
    if (b == 0)
    {
        if ( a == fav)
        {
            cout << "YES";
            return 0;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
 
 
    if ((fav - a)%b == 0 && (fav - a)/b >=0) cout << "YES";
    else cout << "NO";
 
 
    return 0;
}
