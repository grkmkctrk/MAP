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
    EX 3
*/

/*
    EX 4
#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    map<int, string> ismap;

    cfill(ismap, 10);

    cdisplay(ismap);

    return 0;
}
    EX 4
*/

/*
    Ex 5

#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    // map<int, string> ismap;
    // map<int, string, less<int>> ismap; there is no difference with the code above

    map<int, string, greater<int>> ismap;


    cfill(ismap, 10);
    cdisplay(ismap);

    return 0;
}
    Ex 5
*/

/*
    Ex 6


#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    // map<int, string, myLess<int>> ismap;
    map<int, string, myGreater<int>> ismap;
    

    cfill(ismap, 10);
    cdisplay(ismap);

    return 0;
}
    Ex 6
*/

/*
    Ex 8

#include "utilityClass.hpp"

using namespace std;

int main(void){
    
    map<int, string, myGreater<int>> ismap;
   
    cfill(ismap, 10);

    cdisplay(ismap);

    return 0;
}
    Ex 8
*/

/*
    Ex 9

#include "utilityClass.hpp"

using namespace std;

int main(void){
    
    map<string, int> simap;
   
    for (size_t i = 0; i < 10; i++){
        simap.insert(make_pair(srandom(), irandom()));
    }
    

    cdisplayMap(simap);

    string s;
    cout << "the data : "; cin >> s;
    map<string, int>::iterator iter = simap.find(s);

    if (iter == simap.end()) cout << "not found" << endl;
    else iter->second = 198; cdisplayMap(simap);
    

    return 0;
}
    Ex 9
*/

/*
    EX 10
#include "utilityClass.hpp"

using namespace std;

int main(void){
    
    map<int, string> ismap;
   
    for (size_t i = 0; i < 10; i++){
        ismap.insert(make_pair(irandom(), srandom()));
    }
    

    cdisplayMap(ismap);

    int s;
    cout << "the data : "; cin >> s;
    map<int, string>::iterator iter = ismap.find(s);

    if (iter == ismap.end()) cout << "not found" << endl;
    else iter->second = "naber"; cdisplayMap(ismap);
    

    return 0;
}
    EX 10
*/

/*
    EX 11
#include "utilityClass.hpp"

using namespace std;

int main(void){
    
    map<string, int> simap;
   
    for (size_t i = 0; i < 10; i++){
        simap.insert(make_pair(srandom(), irandom()));
    }
    
    cout << "old map" << endl;
    cdisplayMap(simap);

    int s;
    cout << "the data : "; cin >> s;
    
    eraseVal(simap, s);
    
    cout << "new map" << endl;
    cdisplayMap(simap);

    return 0;
}
    EX 11
*/

#include "utilityClass.hpp"

using namespace std;

int main(void){
    
    map<string, int> simap;
   
    for (size_t i = 0; i < 10; i++){
        simap.insert(make_pair(srandom(), irandom()));
    }
    
    cdisplayMap(simap);

    int s;
    cout << "the data : "; cin >> s;
    
    //auto found = findValCon(simap, s);

    auto found = findValIt(
        simap.begin(), 
        simap.end(), 
        s);
    cout << found->first << " " << found->second << endl;
    
    return 0;
}