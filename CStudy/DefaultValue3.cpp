#include <iostream>
int BoxVolume(int length, int weight = 1, int height = 1);
int main(void) {
	std::cout << "[3,3,3]" << BoxVolume(3, 3, 3) << std::endl;
	return 0;
}
int BoxVolume(int length, int width, int height) {
	return length * width * height;
}