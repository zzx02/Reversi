#include <utility>

#define GRID_WIDTH 8

#define MCTS_NODE_VISIT_THRESHOLD 64

using namespace std;

typedef enum
{
    FREE = 0,
    WHITE = -1,
    BLACK = 1
} color_t;

typedef pair<int, int> coordinate_t;
