#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
public:
  Grid();
  void Init();
  void Print();
  void Draw();
  bool isCellOutside(int row, int col);
  int grid[20][10];

private:
  int rows;
  int cols;
  int cellSize;
  std::vector<Color> colors;
};