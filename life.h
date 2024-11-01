#include "common.h"
#define MAXROW 20
#define MAXCOL 60

typedef enum state{DEAD, ALIVE}State;

typedef State Grid[MAXROW +2][MAXCOL + 2];

void CopyMap(Grid map, Grid newmap);
bool UserSaysYes(void);
void Initialize(Grid map);
int NeighborCount(Grid map, int row, int col);
void WriteMap(Grid map);
