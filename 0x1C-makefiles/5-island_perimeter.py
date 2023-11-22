#!/usr/bin/python3
""" Returns the perimeter of the island described in grid """


def d_soroundings(array, y, x):
    """ Determines whether soroundings has water or not """
    k = 1
    top = array[y - 1][x] ^ k if y > 0 else 1
    bottom = array[y + 1][x] ^ k if y < (len(array) - 1) else 1
    left = array[y][x - 1] ^ k if x > 0 else 1
    right = array[y][x + 1] ^ k if x < (len(array[y]) - 1) else 1
    index = top + bottom + right + left
    return index


def island_perimeter(grid):
    """ Gets the perimeter determined by sorounding """
    land = 1
    perimeter = 0
    for i in range(len(grid)):
        for j, x in enumerate(grid[i]):
            if x == land:
                perimeter += d_soroundings(grid, i, j)
    return perimeter
