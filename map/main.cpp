/*

. Binary search

/ map<int, stirng> ismap; : pair<int, string> is masked

*/

/*
    EX 1


#include "utilityClass.hpp"

using namespace std;

int main(){

    map<int, string> ismap; // key, value

    cout << "Value type : " << typeid(map<int, string>::value_type).name() << endl;
    cout << "Key type : " << typeid(map<int, string>::key_type).name() << endl;
    cout << "Mapped type : " << typeid(map<int, string>::mapped_type).name() << endl;


    return 0;
}
    EX 1
*/

/*
    EX 2


#include "utilityClass.hpp"

using namespace std;

int main(){

    map<int, string, less<int>> ismap1; // key, value
    map<int, string, greater<int>> ismap2; 
    map<char, string, greater<int>> ismap3;
    // map<int, string, greater<string>> ismap4;
    // map<string, string, greater<int>> ismap5; 
    map<char, string, greater<double>> ismap6; 

    

    return 0;
}
    EX 2
*/


/*
    EX 3

    EX 3
*/

#include "utilityClass.hpp"

using namespace std;

int main(){

    map<int, string> ismap; // key, value
    
    ismap.insert(pair<int, string>(467, "Gorkem")); // pair has constructed
    // ismap.insert(new pair<int, string>(427, "Ali")); // pointer overload is not included
    ismap.insert(*(new pair<int, string>(441, "Burak")));
    ismap.insert(map<int, string>::value_type(341, "Melih")); // map = value_type
    ismap.insert(make_pair(345, "Ahmetcan"));

    for (auto &&i : ismap){
        cout << "Key : " << i.first << " Value : " << i.second << endl;
    }cout << endl;
    

    return 0; 
}