#include <iostream>
using namespace std;

int main()
{
    int tc, n, seq[1000];
    cin >>tc;
    for(int t=0;t<tc;t++){
        cin >> n;
        for(int i=0; i<n;i++){
            cin >> seq[i];
        }
        if(seq[1]-seq[0]==seq[2]-seq[1]){
            cout << seq[n-1]+seq[1]-seq[0] << endl;
        }
        else{
            cout << seq[n-1]*(seq[1]/seq[0]) << endl;
        }
    }
    return 0;
}
