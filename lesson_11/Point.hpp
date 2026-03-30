#ifndef POINT_HPP
#define POINT_HPP

class Point {
    public:
        Point(int x = 0, int y = 0);

        // customize relational operator
        bool operator==(const Point& other);

        // customize []
        int& operator[](int index);

        bool operator!=(const Point& other);
    private:
        int x, y;
};

#endif