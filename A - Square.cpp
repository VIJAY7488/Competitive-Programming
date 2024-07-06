#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int x1, y1, x2, y2, x3, y3, x4, y4;
      cin >> x1 >> y1;
      cin >> x2 >> y2;
      cin >> x3 >> y3;
      cin >> x4 >> y4;
      
      int res = (x2 != x1) ? (x2-x1) : (y2 - y1);
      cout << res * res << endl;
      
      
    }
    return 0;
}