#include <iostream>
#include<algorithm>
using namespace std;
// the best code for this problem ,, focus on the final operation
long long  gcd(long a, long b) {
    if (b == 0)
       return a;
    return (long long) gcd(b, a % b);
}
long long  LCM(long a,long  b){
    return (long long) a/gcd(a, b)*b;
}

//or this code
/*long long lcm_naive(int a, int b) {
    for (long l = 1; l <= (long long)a * b; ++l)
        if (l % a == 0 && l % b == 0)
            return l;
    return (long long)a * b;
    
}\
*/

int main() {
    int a, b;
    cin >> a >> b;
    cout <<LCM(a, b) << endl;
    /*
        /*int n1, n2, max;
        cin >> n1 >> n2;

        // maximum value between n1 and n2 is stored in max
        max = (n1 > n2) ? n1 : n2;

        do
        {
            if (max % n1 == 0 && max % n2 == 0)
            {
                cout<< max;
                break;
            }
            else
                ++max;
        } while (true);
        */
        return 0;
}