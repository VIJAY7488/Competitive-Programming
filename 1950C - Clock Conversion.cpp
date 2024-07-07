#include <iostream>
using namespace std;

int main() 
{
   int t;
   cin >> t;
   
   while(t--){
     char ch1, ch2, ch3, ch4, ch5;
     cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5;
     
     int hour = (ch1 - '0') * 10 + (ch2 - '0');
     //ch1 - '0': This converts the character ch1 to its corresponding integer value.
     //For example, the character '0' has an ASCII value of 48, '1' has an ASCII value of 49, and so on.
     //(ch1 - '0') * 10: This converts the first character of the hour to its integer value and then multiplies it by 10.
     // For example, if ch1 is '1', this part results in 1 * 10 = 10.
     //(ch2 - '0'): This converts the second character of the hour to its integer value.
     // For example, if ch2 is '3', this part results in 3.
     // If the input time is 13:45:
     //ch1 is '1' and ch2 is '3'.
     //ch1 - '0' converts '1' to 1.
     //ch2 - '0' converts '3' to 3.
     //(ch1 - '0') * 10 results in 1 * 10 = 10.
     
     if(hour >= 12){
         if(hour > 12) {
             hour -= 12;
         }
         cout << (hour < 10 ? "0" : "") << hour << ch3 << ch4 << ch5 << " PM" << endl;
     } else {
         if(hour == 0) {
             hour = 12;
         }
         cout << (hour < 10 ? "0" : "") << hour << ch3 << ch4 << ch5 << " AM" << endl;
     }
   }
   
   return 0;
}
