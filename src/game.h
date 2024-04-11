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
    std::vector<Block> GetAllBlocks();

private:
    std::vector<Block> blocks;
    Block currBlock;
    Block nextBlock;
};