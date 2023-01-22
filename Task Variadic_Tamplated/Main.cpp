#include<iostream>
#include<string>
#include<vector>

template<typename ... Args>
class MyClass {
public:
	auto sum_all(Args ... args) { 
		return (args + ...);// (p1 op (p2 op(...(pN-1 op pN)...)
	}
};


int main() {
	MyClass<int, double, float> a;
	int x = 5;
	double y = 3.4;
	float z = 11.2f;
	
	std::cout << a.sum_all(x, y, z);
	return 0;
}