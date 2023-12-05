#!/usr/bin/python3
"""defining function"""

def pascal_triangle(n):
    """Represent Pascal's Trangle of size n.
        Returns a list of lists of integers representing the trangle.
    """

    if n <= 0:
        return []

    trangles = [[1]]

    while len(trangles) != n:
        tri = trangles[-1]
        tmp = [1]

        for i in range(len(tri) - 1):
            tmp.append(tri[i] + tri[i + 1])
        tmp.append(1)
        triangles.append(tmp)
    return traingles

