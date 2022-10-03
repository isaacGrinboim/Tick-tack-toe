
#ifndef SYMBOL_H
#define SYMBOL_H

#include <iostream>
using namespace std;


enum class Symbol{Empty, X,O};
ostream& operator<<(ostream& os, Symbol& symbol) {
  switch(symbol)
    {
        case Symbol::Empty:    os<<" ";
        case Symbol::X:        os<<"X";
        case Symbol::O:        os<<"O";
    }
    return os;
}

#endif
