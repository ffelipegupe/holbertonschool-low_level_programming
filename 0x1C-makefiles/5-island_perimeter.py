#!/usr/bin/python3
"""Island Perimeter Module"""


def island_perimeter(grid):
    """Function to find an island perimeter based on grid"""
    l = 0
    for width in range(len(grid)):
        for height in range(len(grid[0])):
            l = 4
            if grid[width][height] == 1:
                if grid[width][height + 1] == 1:
                    l -= 1
                if grid[width][height - 1] == 1:
                    l -= 1
                if grid[width + 1][height] == 1:
                    l -= 1
                if grid[width - 1][height] == 1:
                    l -= 1
            if grid[0][height] == 1:
                l -= 1
            if grid[width][0] == 1:
                l -= 1
    return(l)
