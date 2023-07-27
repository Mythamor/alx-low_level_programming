#!/usr/bin/python3
"""
Module Island Perimeter
"""


def island_perimeter(grid):
    """ Calculates grid perimeter where "1" is found """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # check left
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                # check right
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1
                # check up
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                # check down
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1

    return perimeter
