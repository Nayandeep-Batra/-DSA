
#include <iostream>
#include <vector>
using namespace std;

double myPow(double x, int n) {

        // Corner cases
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n%2==0) return 1.0;
        if(x == -1 && n%2!=0) return -1.0;
        long bf = n;
        if ( n < 0)
        {
            x = 1/x;
            bf = -bf;
        }
        double ans = 1;

        while( bf > 0)
        {
            if(bf % 2 == 1){
                ans = ans * x;
            }
            x *= x; //x^2
            bf= bf /2;
        }
        return ans;
    }

int main()
{
    double x;
    int n;
 cout << "Enter value of x" << endl;
 cin >> x;
 cout << "Enter value of n" << endl;
cin >> n;    
    int ans = myPow(x, n);
    cout << ans << endl; 
    return 0;
}