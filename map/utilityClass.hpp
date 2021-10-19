#ifndef _UTILITY_CLASS_H__
#define _UTILITY_CLASS_H__


#include   <iostream>
#include     <vector>
#include       <list>
#include  <algorithm>
#include      <ctime>
#include        <map>
#include    <cstdlib>
#include   <iterator>
#include <functional>
#include        <set>

void Randomize(void);
int irandom(void);
std::string srandom(void);

template<class Con>
void cfill(Con& con, size_t size){
    size_t s = size;
    for (
        size_t s = 0; 
        s < size; 
        con.insert(
            std::pair<int, std::string>(irandom(), srandom())
            ),
        s++
        );
}

template<class Con>
void cdisplay(const Con& con){
    // for(auto &&i : con){
    //     std::cout << i.first << " " << i.second << '\n';
    // }std::cout << std::endl;

    for (
        typename Con::const_iterator iter = con.begin(); 
        iter != con.end(); 
         std::cout << iter->first << " " << iter->second << '\n',
        iter++);
}

template<class T>
class myLess{
    public:
    constexpr bool operator()(const T& left, const T& right){
        return left < right;
    }
};

template<class T>
class myGreater{
    public:
    constexpr bool operator()(const T& left, const T& right){
        return left > right;
    }
};

template<class T, class U>
void cdisplayMap(const std::map<T, U>& con){
    for (/*typename std::map<T,U>::const_iterator*/ 
    auto iter = con.begin(); 
    iter != con.end(); 
    std::cout << iter->first << " " << iter->second << std::endl,
    iter++); std::cout << std::endl;   
}


template<class U, class T>
void eraseVal(std::map<U, T>& con, const T& val){
    // auto iter = con.begin();
    // while(iter != con.end()){
    //     if(iter->second == val){
    //         con.erase(iter++);
    //     }++iter;
    // }

    for(
        auto iter = con.begin();
        iter != con.end();
        (iter->second == val) ? con.erase(iter++) : iter++
    );
}


template<class T, class U>
auto findValCon(std::map<T, U>& con, const U& val){
    auto iter = con.begin();    

    while(iter != con.end()){
        if(iter->second == val) return iter;
        else iter++;
    }std::cout << "iter is not found " << std::endl; return iter;
}

template<class T, class U>
auto findValIt(
    T first, 
    T last,
    const U& val){
    auto iter = first;    

    while(iter != last){
        if(iter->second == val) return iter;
        else iter++;
    }std::cout << "iter is not found " << std::endl; return iter;
}

#endif