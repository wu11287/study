//
// Created by wuhui on 2020/3/12.
//


//#define WUHUI
#ifdef WUHUI

#include <iostream>
#include <vector>
using  namespace std;

int main(){
    pair<int, int> p;
    pair<int, int> p2(2,3);//定义时初始化
    pair<int, vector<int>> p3(1, {3,7});
    pair<int, int> p4 = p2;//first和second都相等

    cout<<p2.first<<"\t"<<p2.second<< endl;
    p2.first =5;
    cout<<p2.first<<"\t"<<p2.second<< endl;//重新赋值会覆盖之前的

    p = make_pair(55,67);
    cout<<p.first<<"\t"<<p.second<< endl;
    return 0;
}

#endif
