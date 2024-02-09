#include<stdio.h>

template<typename T1, typename T2>
class Box {
public:
	T1 height;
	T2 width;

	//Box(T1 height, T2 width) : height(height), width(width) {}

	
	T1 Min(T1 height, T2 width)
	{
		if (height < width) {
			return height;
		}
		else {
			return  width;
		}
	}
	
	/*T1 size() {
		return static_cast<T1>(height * width);
	}*/
};

int main() {
	Box<float,int>b1;
	Box<double,double> b2;
	Box<float, float> b3;
	Box<double, float> b4;
	Box<double, int> b5;
	Box<int, int> b6;
	float A = b1.Min(0.5f, 10);
	float B =b2.Min(0.05f, 0.01f);
	float C =b3.Min(0.1f, 0.5f);
	float D =b4.Min(0.01f, 0.1f);
	float E = b5.Min(0.01f, 5);
	int F  =b6.Min(7, 5);
	printf("%f\n" , A);
	printf("%lf\n", B);
	printf("%f\n", C);
	printf("%lf\n", D);
	printf("%lf\n", E);
	printf("%d\n", F);
	return 0;
}