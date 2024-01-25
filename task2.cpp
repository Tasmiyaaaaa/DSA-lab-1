#include<iostream>
#include<cmath>
using namespace std;

class Point {
private:
	float x, y;
public:
	Point()
	{
		x = 0.0;
		y = 0.0;
	}
	//parametrized constructor
	Point(float a, float b)
	{
		x = a;
		y = b;
	}

	//getters
	void setX(float X)
	{
		x = X;
	}

	void setY(float Y)
	{
		y = Y;
	}

	//setters 
	float  getX()
	{
		return x;
	}

	float getY()
	{
		return y;
	}

	//distance calculation
	float dist(Point &p)
	{
		float a = x - p.x;
		float b = y - p.y;
		float distance = sqrt((a * a) + (b * b));
		//return(a, b);
		return distance;
	
	}
};

int main()
{
	Point p1(2.0, 3.0);
	Point p2(3.5, 4.1);

	float distance = p1.dist(p2);
	cout << "Distance between p1 and p2: " << distance << endl;

	return 0;
}