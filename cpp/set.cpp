//
// Created by wuhui on 2020/3/13.
//

//#define WUHUI
#ifdef WUHUI

#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

int main(){
    /*set<int> s = {2,3,5,6};
    s.insert(2);
    s.insert(3);*/
    set<int> s = {6,5,4,3,2};
    /*set<int>::iterator it = s.find(5);
    set<int> s2(s.begin(), it);//从s的首位到it之前（不包含it）*/
    for (auto i : s) {
        cout << i << '\t';
    }
    return 0;
}

#endif