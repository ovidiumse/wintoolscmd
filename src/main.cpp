#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main(int argc, char* argv[])
{
	for (int i = 0; i < 10; ++ i)
	{
		std::cout << "This is coolest!" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	
	return 0;
}