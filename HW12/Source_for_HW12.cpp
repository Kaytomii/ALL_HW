#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() 
{
    setlocale(LC_ALL, "");

    std::vector<IShape*> shapes;

    shapes.push_back(new Circle(5, 0, 0));
    shapes.push_back(new Rectangle(1, 2, 10, 20));
    shapes.push_back(new Triangle(0, 0, 1, 0, 0, 1));

    std::ofstream fout("shapes.txt");
    fout << "Circle 5 0 0\n";
    fout << "Rectangle 1 2 10 20\n";
    fout << "Triangle 0 0 1 0 0 1\n";
    fout.close();

    for (auto s : shapes) delete s;
    shapes.clear();

    std::ifstream fin("shapes.txt");
    std::string type;
    while (fin >> type) 
    {
        if (type == "Circle") 
        {
            double r, x, y;
            fin >> r >> x >> y;
            shapes.push_back(new Circle(r, x, y));
        }
        else if (type == "Rectangle") 
        {
            double x, y, w, h;
            fin >> x >> y >> w >> h;
            shapes.push_back(new Rectangle(x, y, w, h));
        }
        else if (type == "Triangle") 
        {
            double x1, y1, x2, y2, x3, y3;
            fin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            shapes.push_back(new Triangle(x1, y1, x2, y2, x3, y3));
        }
    }
    fin.close();

    for (auto s : shapes) 
    {
        s->print();
    }

    for (auto s : shapes) delete s;

    return 0;
}