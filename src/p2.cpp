// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;

int gcd(int a, int b){
    int r = a%b;
    a = b;
    b = r;
    if (r==0){
        return a;
    }
    return gcd(a,b);
}
int main (){
    int a, b;
    while (cin >> a >> b){
        cout << gcd(a,b) << endl;
    }
    return 0;
}
