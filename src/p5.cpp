#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int from, int to, int aux){
    if (n==1){
        cout << "Move disk 1 " << "from" << from  << "to" << to << endl;
    } else {
        hanoi (n-1, from, aux, to);
        cout << "Move disk " << n << "from" << from << "to" << to << endl;
        hanoi (n-1, aux, to, from);
    }
}
int main (){
    int n;
    while (cin >> n){
        hanoi (n, '1','3','2');
    }
    return 0;
}
