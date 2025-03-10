#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    Grid grid;
    Block GetRandomBlock();
    void Draw();
    void KeyboardInput();
    void MoveBlockLeft();
    void MoveBlockRight();
    void MoveBlockDown();
    std::vector<Block> GetAllBlocks();

private:
    bool IsBlockOutside();
    void RotateBlock();
    std::vector<Block> blocks;
    Block currBlock;
    Block nextBlock;
};