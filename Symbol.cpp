#include "Symbol.h"


ostream& operator<<(ostream& os, Symbol& symbol) {
  switch(symbol)
    {
        case Symbol::Empty:    os<<"   ";    break;
        case Symbol::X:        os<<" X ";    break;
        case Symbol::O:        os<<" O ";    break;
    }
    return os;
}
