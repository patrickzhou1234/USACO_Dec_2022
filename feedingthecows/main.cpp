// http://www.usaco.org/index.php?page=viewproblem&cpid=1240
#include <iostream>
#include <vector>

using namespace std;

struct cse {
    int n, k;
    vector<char> cows;
};

#define MAX_INT 2147483647

int main() {
    int t, i, j, n, k;
    char tmpcow;
    cin >> t;
    cse mat[t];
    for (i=0;i<t;i++) {
        cin >> mat[i].n >> mat[i].k;
        for (j=0;j<mat[i].n;j++) {
            cin >> tmpcow;
            mat[i].cows.push_back(tmpcow);
        }
    }
    string outputstr;
    for (i=0;i<t;i++) {
        k=mat[i].k;
        n=mat[i].n;
        for (j=0;j<n;j++) {
            if (k!=0) {
                if (j+k<n && (mat[i].cows[j]==mat[i].cows[j+k] || mat[i].cows[j+k]=='.')) {
                    mat[i].cows[j+k]='.';
                    mat[i].cows[j]=mat[i].cows[j];
                }
            }
        }
        for (j=0;j<n;j++) {
            cout << mat[i].cows[j];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}