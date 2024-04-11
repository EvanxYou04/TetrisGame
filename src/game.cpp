#include "game.h"
#include <random>

Game::Game()
{
    grid = Grid();
    blocks = GetAllBlocks();
    currBlock = GetRandomBlock();
    nextBlock = GetRandomBlock();
}

Block Game::GetRandomBlock()
{
    if (blocks.empty())
    {
    }
    int idx = rand() % blocks.size();
    Block block = blocks[idx];
    blocks.erase(blocks.begin() + idx);
    return block;
}

std::vector<Block> Game::GetAllBlocks()
{
    return {IBlock(), JBlock(), LBlock(), OBlock(), SBlock(), TBlock(), ZBlock()};
}

void Game::Draw()
{
    grid.Draw();
    currBlock.Draw();
}

void Game::KeyboardInput()
{
    int keyPressed = GetKeyPressed();
    switch (keyPressed)
    {
    case KEY_LEFT:
        MoveBlockLeft();
        break;
    case KEY_RIGHT:
        MoveBlockRight();
        break;
    case KEY_DOWN:
        MoveBlockDown();
        break;
    default:
        break;
    }
}

void Game::MoveBlockLeft()
{
    currBlock.Move(0, -1);
}
void Game::MoveBlockRight()
{
    currBlock.Move(0, 1);
}
void Game::MoveBlockDown()
{
    currBlock.Move(1, 0);
}