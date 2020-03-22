//
// Created by wuhui on 2020/3/12.
//


//#define WUHUI
#ifdef WUHUI

#include <iostream>
#include <map>
using  namespace std;

int main(){
    /*map<int, int> m;
    //注意插入元素的方式，需要make_pair创建一个对象。m.insert(2,3)是错误的
    m.insert(make_pair(2,3));
    //map的键是唯一的，只能插入一次。后面重新赋值不起作用
    m.insert(make_pair(3,4));
    m.insert(make_pair(3,6));
    m.insert(make_pair(1,5)); //map会自动对元素按照first进行排序


    for (auto i : m) {
        cout<<i.first<<"\t"<<i.second<<"\t"<<endl;//结果是3,4
    }
    cout<<endl;
    //一共有四种插入方式
    m.insert(make_pair(2,5));
    map<string, int> m2;
    m2.insert(make_pair<string, int>("hell0",44));

    m[9] = 78;
    m2["google"] = 100;

    m2.insert(map<string , int>::value_type("d" , 4));
    for (auto i : m) {
        cout<<i.first<<"\t"<<i.second<<"\t"<<endl;//结果是3,4
    }
    for (auto i : m2) {
        cout<<i.first<<"\t"<<i.second<<"\t"<<endl;//结果是3,4
    }

    map<int,int>::iterator it = m.find(3);
    if (it != m.end()) {
        cout<<"find it !\t"<< it->second;
    }
*/
    map<int, int> m, m2;
    m.insert(make_pair(2,3));
    m.insert(make_pair(3,4));
    m.insert(make_pair(5,9));
    m2.insert(make_pair(22,33));
    m2.insert(make_pair(33,44));
    m2.insert(make_pair(55,99));

    for (auto i : m) {
        cout<<i.first<<"\t"<<i.second<<"\t"<<endl;
    }
    for (auto i : m2) {
        cout<<i.first<<"\t"<<i.second<<"\t"<<endl;
    }
    cout<<endl;

    swap(m,m2);

    for (auto i : m) {
        cout<<i.first<<"\t"<<i.second<<"\t"<<endl;
    }
    cout<<endl;
    for (auto i : m2) {
        cout<<i.first<<"\t"<<i.second<<"\t"<<endl;
    }
    /*//可以修改value值
    m[2] = 15;
    for (auto i : m) {
        cout<<i.first<<"\t"<<i.second<<"\t"<<endl;
    }
    map<int, int> ::iterator it;
    it = m.find(2);
    m.erase(it);
    for (auto i : m) {
        cout<<i.first<<"\t"<<i.second<<"\t"<<endl;
    }*/
    return 0;
}

#endif
