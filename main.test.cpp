#include "quick_rsqrt.hpp"
#include <iostream>

int main()
{
	float input[]
	{
		0.f,
		1.f,
		100.f,
		1000.f,
		std::numeric_limits<float>::max()
	};
	for (auto v : input)
	{
		std::cout << "sqrt = " << std::sqrt(v) << "\n";
		std::cout << "1 / quick_rqrt<1> = " << 1.0f / quick_rsqrt<1>(v) << "\n";
		std::cout << "1 / quick_rqrt<4> = " << 1.0f / quick_rsqrt<4>(v) << "\n\n";
	}
}