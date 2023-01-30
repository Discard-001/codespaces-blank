#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,8,2,2,3,4,8,4,4,};
    cout << "hello" << endl;
    for(int i : a) cout << i << " ";
    cout << endl;
    cout << "你觉得能行不？" << endl;
    return 0;
}