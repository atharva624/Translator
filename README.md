
# Triangulation Project


This project is a C++ console application that reads vertices of triangles from an STL file, processes them to ensure uniqueness, and outputs the data to a .dat file for visualization using GNUplot. The project demonstrates basic geometric data handling and plotting.



## Features

- STL File Parsing: The program reads and parses the vertices of triangles from an STL file.
- Unique Point Storage: Points are stored in a vector of unique coordinates, ensuring no duplicate points. Repeated coordinates are stored with their indices using an unordered map.
- Triangle Creation: The project constructs triangles from the parsed vertices, mapping them to unique points by index.
- Precision Handling: The project handles precision for floating-point coordinates of points.
- GNUplot Integration: The resulting triangles are written to a .dat file, which can be used to plot 3D shapes, such as a cube, in GNUplot.


## How It Works


- STL File Input: The program reads an STL file that contains facets of triangles with vertex coordinates.
- Unique Point Management: A vector of points (std::vector<Point>) stores unique coordinates. If a point already exists, its index is stored in an unordered map (std::unordered_map<double, int>).
- Triangle Construction: A triangle is created using the unique points and passed to the Writer class.
- Writing to .dat: The triangles are written to a .dat file, with each triangle's vertices mapped by their unique point indices.
- Plotting in GNUplot: The .dat file can be plotted to visualize the 3D shape, like a cube, using GNUplot.

## Prerequisites


- Visual Studio (or any C++ IDE)
- GNUplot for 3D plotting



## How to Build and Run

- Clone the repository.
- Build the project using Visual Studio or another C++ compiler.
- Modify reader.cpp to specify the input STL file.
- Run the program to generate the .dat file.
- Use GNUplot to visualize the output:
```
 gnuplot> splot 'output.dat' with lp lt 3 

 ```

