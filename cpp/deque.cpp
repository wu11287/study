//
// Created by wuhui on 2020/3/15.
//
//#define WUHUI
#ifdef WUHUI

#include <iostream>
#include <deque>
#include <stack>
using  namespace std;
int main() {
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(7);
    dq.push_back(10);

    dq.push_front(3);
    dq.push_front(4);
    dq.push_front(8);
    while (!dq.empty()) {
        int i = dq.front();
        cout<<i<<"\t";
        dq.pop_front();
    }
    return 0;
}

#endif
