// http://www.usaco.org/index.php?page=viewproblem&cpid=1239
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_INT 2147483647

int main() {
    long n, i, j, mx, mn, ct, mxct=-1, mxcst;
    cin >> n;
    long maxtuit[n];
    for (i=0;i<n;i++) {
        cin >> maxtuit[i];
    }
    sort(maxtuit, maxtuit+n);
    mx = maxtuit[n-1];
    mn = maxtuit[0];
    for (i=0;i<n;i++) {
        ct=0;
        for (j=n-1;j>=i;j--) {
            ct+=maxtuit[i];
        }
        if (ct>mxct) {
            mxct = ct;
            mxcst = maxtuit[i];
        }
    }
    cout << mxct << " " << mxcst;
    system("pause");
    return 0;
}