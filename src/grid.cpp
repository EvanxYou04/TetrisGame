#include "grid.h"
#include "colors.h"
#include <iostream>

Grid::Grid()
{
    rows = 20;
    cols = 10;
    cellSize = 30;
    Init();
    colors = GetCellColors();
}
void Grid::Init()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            grid[i][j] = 0;
        }
    }
}

void Grid::Print()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Grid::Draw()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int cellValue = grid[i][j];
            DrawRectangle(j * cellSize + 1, i * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]); // offset by one pixel to show grid effect
        }
    }
}

bool Grid::isCellOutside(int row, int col)
{
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        return false;
    }
    return true;
}
