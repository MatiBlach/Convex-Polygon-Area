# Convex-Polygon-Area
Find the area of a convex polygon. \
Save vertices as a structure (key word: struct). \
Try to not use arrays, vectors, lists etc. 


If a result is real number x, then use floor function (or int(x)).

## Input

Coordinates of vertices of a polygon, i.e.:
```
l
n x0 y0 x1 y1 x2 y2 x3 y3 ...  
...
```

_l_ - number of lines (number of poligons) \
_n_ - number of coordinates (n/2 - number of vertices) \
_xi,yi_ - coordinates, e.g., (0,0), (0,2), (2,2), (2,0) is 0 0 0 2 2 2 2 0 in input \

## Output

Area of the polygon.

# Example

### Input
```
2
8 0 0 0 2 2 2 2 0
10 92 61 62 69 -94 61 -92 -80 78 -9
```

### Output
```
4
19310
```
