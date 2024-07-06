// Depending on whether the player chooses to exchange wallets 
// with their opponent on step 1 , 1
//  coins will be removed from either the opponent's wallet 
// or the player's wallet. This means that if either of the players still has remaining coins, 
// the game will not end as at least one of the choices will still be valid.

// The only way that the game ends is when both players have 0
//  coins. Since each operation decreases the total amount of coins by exactly 1
// , the only way for Alice to win the game is if a+b
//  is odd.



#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int a, b;
      cin>>a>>b;
      
      
      
        if((a+b)%2 == 0){
          cout << "Bob" << endl;
        }
        else{
           cout << "Alice" << endl;
        }
      
      
      
      
    }
    return 0;
}