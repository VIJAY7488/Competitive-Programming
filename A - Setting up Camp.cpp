#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int a, b, c;
      cin>> a >> b >> c;
      int d = (b+c)%3;
      if(d>c){
        cout<<-1<<endl;
      }
      else{
        cout<< a + (c+b+2)/3 << endl;
      }
    }
    return 0;
}