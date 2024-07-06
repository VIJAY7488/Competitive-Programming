#include <iostream>
#include <climits>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      
      string str;
      cin >> str;
      
      int arr[str.length()];
      
      for(int i=0; i<str.length(); i++){
        if(str[i] == '+'){
          arr[i] = 1;
        }
        else if(str[i] == '-'){
          arr[i] = -1;
        }
      }
      
      int sum = 0;
      for(int i=0; i<str.length(); i++){
         sum += arr[i];
      }
      
      cout << abs(sum) << endl;
      
    }
    return 0;
}