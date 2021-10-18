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

#endif