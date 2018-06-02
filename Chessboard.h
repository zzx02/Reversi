#include <utility>
#include <vector>

#include "Global.h"

using namespace std;

class Chessboard
{
public:
    Chessboard();
    bool isTerminal();
    vector<coordinate_t> getPlaceable(color_t color);
    void putChess(coordinate_t pos, color_t color);
private:
    static const int boardWidth = 8;
    bool isPlaceable(coordinate_t pos, color_t color);
    static const pair<int, int> dir[8];
    color_t board[boardWidth][boardWidth];
    int blackCount = 0;
    int whiteCount = 0;
};