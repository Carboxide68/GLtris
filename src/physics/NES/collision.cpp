#include "../../common/renderer.h"
#include "../../virtObj/board.h"
#include "../../virtObj/shapes.h"
#include "../../virtObj/tetrisBlock.h"

int collides(const TetrisEntity &block, const Board &board) {
    
    Shape blockShape = block.getShape();

    for (int i = 0; i < 5; i++) {

        if (board.getSquare(blockShape.blocks[i]) < 0) {
            return 1;
        }

    }

    return 0;

}