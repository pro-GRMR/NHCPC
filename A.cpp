#include <iostream>
using namespace std;

int main()
{
    int tc, x, y;
    string str;
    cin >>tc;
    for(int t=0;t<tc;t++){
        cin >> x >> y;
        cin >> str;
        for(int i=0; i<str.length();i+=2){
            if(str[i]=='N'){
                y+=str[i+1]-48;
            }
            else if(str[i]=='S'){
                y-=str[i+1]-48;
            }
            else if(str[i]=='E'){
                x+=str[i+1]-48;
            }
            else if(str[i]=='W'){
                x-=str[i+1]-48;
            }
        }
        cout << x << " " << y << endl;
    }

    return 0;
}
