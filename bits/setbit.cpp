#include<iostream>

using namespace std;

int getIthBit(int x, int i){
    int mask = (1<<(i-1));
    return (x & mask) > 0 ? 1:0;
}
int clearIthBit(int x, int i){
    int mask = ~(1 << (i-1));
    return (x & mask);
}

int setIthBit(int x, int i) {
    int mask = (1 << (i-1));
    return (x | mask);
}

int updateIthBit(int x, int i, int v) {
    int z = clearIthBit(x, i);
    int mask = (v << (i-1));
    return (z | mask);
}
int clearBitRange(int x, int i, int j) {
    int a  = ((~0) << j+1);
    int b = (1<<i) - 1;
    int mask =( a | b);
    return (x & mask);
}
int main() {
    // int x, i;
    // cin >> x >> i;
    cout << getIthBit(11, 1) << endl;
    cout << getIthBit(11, 2) << endl;
    cout << getIthBit(11, 3) << endl;
    cout << clearIthBit(11,2) << endl;
    cout << setIthBit(11,3) << endl;
    cout << updateIthBit(11, 2, 1) << endl;
    cout << clearBitRange(31, 1, 3) << endl;

}