#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      
      for(int i=0; i<n; i++){
        char ch;
            cin >> ch;
            arr[i] = ch - '0';
      }
      
      int count = 0;
      for(int i=0; i<n; i++){
        if(arr[i] == 1){
          count++;
        }
      }
      
      if(count == 0){
        cout<<"YES"<<endl;
      }
     else if(count == 2){
       bool isAdjacent=false;
      for(int i=1; i<n; i++){
       if( arr[i] == 1 && arr[i-1] == 1){
         isAdjacent=true;
         break;
       }
      }
        if(isAdjacent){
          cout<<"NO"<< endl;
        }
        else{
          cout<<"YES" << endl;
        }
      }
      
      else if(count%2 == 0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}