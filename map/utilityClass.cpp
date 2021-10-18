#include "utilityClass.hpp"

void Randomize(void){
    std::srand(static_cast<unsigned>(time(0)));
}

int irandom(void){
    return static_cast<int>(rand() % 1000);
}

std::string srandom(){
    static const char* const pnames[] = {
        "Berathan", 
        "Gorkem",
        "Berda",
        "Ramazan",
        "Ahmetcan",
        "Melihcan",
        "Burak",
        "Emir",
        "Eymen",
        "Zeynep",
        "Miray",
        "Goktug"
    };
    size_t size = sizeof(pnames) / sizeof(*pnames);
    return pnames[std::rand() % size];
}