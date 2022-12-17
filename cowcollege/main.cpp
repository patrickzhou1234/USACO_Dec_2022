// http://www.usaco.org/index.php?page=viewproblem&cpid=1239
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_INT 2147483647

int main() {
    int n, i, j, mx, ct=0, mxct=-1, mxcst;
    cin >> n;
    int maxtuit[n];
    for (i=0;i<n;i++) {
        cin >> maxtuit[i];
    }
    sort(maxtuit, maxtuit+n);
    mx = maxtuit[n-1];
    for (i=0;i<mx;i++) {
        ct=0;
        for (j=0;j<n;j++) {
            if (i<=maxtuit[j]) {
                ct+=i;
            }
        }
        if (ct>mxct) {
            mxct = max(ct, mxct);
            mxcst=i;
        }
    }
    cout << mxct << " " << mxcst;
    system("pause");
    return 0;
}