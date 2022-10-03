
#ifndef SYMBOL_H
#define SYMBOL_H
#define BOARD_LINE "—"<<"—"<<"—"<<"—"<<"—"<<"—"<<"—"<<"—"<<"—"<<"—"<<"—"<<"—"<<"—"<<"—"<<"—"

#include <iostream>
using namespace std;
enum class Symbol{Empty, X,O};
ostream& operator<<(ostream& os, Symbol& symbol);


#endif
