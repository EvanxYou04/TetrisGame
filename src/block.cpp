#include "block.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
    rowOffset = 0;
    colOffset = 0;
}

void Block::Draw()
{
    std::vector<Position> tiles = GetCellPos();
    for (Position item : tiles)
    {
        DrawRectangle(item.col * cellSize + 1, item.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]); // offset by one pixel
    }
}

void Block::Move(int row, int col)
{
    rowOffset += row;
    colOffset += col;
}

std::vector<Position> Block::GetCellPos()
{
    std::vector<Position> tiles = cells[rotationState];
    std::vector<Position> newTiles;
    for (Position item : tiles)
    {
        Position newPos = Position(item.row + rowOffset, item.col + colOffset);
        newTiles.push_back(newPos);
    }
    return newTiles;
}