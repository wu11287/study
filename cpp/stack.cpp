//
// Created by wuhui on 2020/3/15.
//
//#define WUHUI
#ifdef WUHUI

#include <iostream>
#include <deque>
#include <stack> //先进后出
using  namespace std;
int main() {
    stack<int> sk;
    sk.push(7);
    sk.push(10);
    sk.push(16);
    while (!sk.empty()) {
        cout << sk.top() << "\t";
        sk.pop();
    }
    return 0;
}

#endif
