


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


// Method 2

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    double x, y, totalLength = 0.0;
    cin >> x >> y;

    // Loop to read the remaining points and calculate the total length
    for (int i = 1; i < n; ++i) {
        double v, w;
        cin >> v >> w;
        totalLength += sqrt((v - x) * (v - x) + (w - y) * (w - y));
        x = v; // Update x to the new point's x-coordinate
        y = w; // Update y to the new point's y-coordinate
    }

    // Calculate the total time spent on signing all papers
    double totalTime = (totalLength * k) / 50.0;

    // Output the result with fixed precision
       cout << fixed << setprecision(9) << totalTime << endl;

    return 0;
}

