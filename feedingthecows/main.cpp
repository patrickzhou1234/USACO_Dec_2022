// http://www.usaco.org/index.php?page=viewproblem&cpid=1240
#include <iostream>
#include <vector>

using namespace std;

#define MAX_INT 2147483647

int main() {
    int t, i, j, n, k, m, gct, hct;
    cin >> t;
    vector<char> mat;
    char inp;
    for (i=0;i<t;i++) {
        cin >> n >> k;
        for (j=0;j<n;j++) {
            cin >> inp;
            mat.push_back(inp);
        }
        for (j=0;j<n;j++) {
            gct=1;
            hct=1;
            if (k!=0) {
                for (m=1;m<=k;m++) {
                    if (j+m<n) {
                        if (mat[j+m]=='G') {
                            gct++;
                        }
                        if (mat[j+m]=='H') {
                            hct++;
                        }
                    }
                    if (j-m>=0) {
                        if (mat[j-m]=='G') {
                            gct++;
                        }
                        if (mat[j-m]=='H') {
                            hct++;
                        }
                    }
                }
            }
            cout << gct << " " << hct << endl;
        }
    }
    
    system("pause");
    return 0;
}