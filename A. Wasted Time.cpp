


#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    
    int arrx[n];
    int arry[n];
    
    
    for(int i = 0; i < n; i++) {
        cin >> arrx[i] >> arry[i];
    }
    
    double sum = 0;
    
    // Finding distance of coordinate
    for(int i = 0; i < n - 1; i++) {
        double dx = arrx[i+1] - arrx[i];
        double dy = arry[i+1] - arry[i];
        sum += sqrt(dx * dx + dy * dy);
    }
    
   
    double total_time = (sum * k) / 50;
    
    
    printf("%.6f\n", total_time);
    
    return 0;
}
