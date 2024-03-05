#include <iostream>

#include <algorithm>

using namespace std;

int main() {
    int t,trace=0;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int a=i,b=j,tr=0;
                while(a<n && b<n){
                    tr+=arr[a++][b++];
                    
                }
                    trace=max(trace,tr);
            }
        }
        cout<<trace<<endl;
        trace=0;
    }

    return 0;
}
