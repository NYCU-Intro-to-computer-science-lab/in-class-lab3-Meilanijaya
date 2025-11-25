// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;

int main() {
    int gcd(int a, int b){
    int r;
    r= a%b;
    a = b;
    b = r;
    if (r == 0){
        return a;
    } else {
        return gcd(b,r);
    }
}

int main (){
    int a, b, r;
    while (cin >> a >> b){
        int r;
        r= a%b;
        a = b;
        b = r;
        cout << gcd(a,b);
    }
    return 0;
}
