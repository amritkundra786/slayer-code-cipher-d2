#include<bits/stdc++.h>
using namespace std;
#define n 4
bool isSafeToPlace(int arr[n][n], int m, int k) {

        for (int i = 0; i < m; i++) {
            if (arr[i][k] == 1) {
                return false;
            }
        }

        int p = m;
        int q = k;

        while (p >= 0 && q >= 0) {
            if (arr[p][q] == 1) {
                return false;
            }
            p--;
            q--;
        }

        p = m;
        q = k;
        while (p >= 0 && q < n) {
            if (arr[p][q] == 1) {
                return false;
            }
            p--;
            q++;
        }

      return true;
    }
    
int nqueen(int arr[n][n],int m){
	if (m==n) {
            for (int i=0;i<n;i++) {
                for (int j=0;j<n;j++) {
                    cout<<arr[i][j]<<" ";
                }
                cout<<"\n";
            }
            return true;
        }

        for (int k = 0; k <n; k++) {
            if (isSafeToPlace(arr,m,k)) {
                arr[m][k] = 1;
                bool isPlaced = nqueen(arr,m+1);
                if (isPlaced) {
                    return true;
                }
                arr[n][k] = 0;
            }
        }
        return false;


    }
int main(){
	int m;
	cin>>m;
	int arr[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	nqueen(arr,m);
}
