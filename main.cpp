#include <iostream>
#include <cinttypes>

using namespace std;

int64_t nchoosek(int n, int k)
{
    k = (k < n-k? k : n-k);

    int64_t nck = 1;
    for(int i = 1; i <= k; i++){
        nck *= (n+1-i);
        nck /= i;
    }

    return nck;
}

int main()
{
    int n = 20;

    cout << nchoosek(2*n, n) << endl;

    return 0;
}