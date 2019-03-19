#include <iostream>
int BoxVolume(int length, int weight, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);
int BoxVolume();

int main(void) {
	std::cout << "[3,3,3]" << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,d]" << BoxVolume(5,5) << std::endl;
	std::cout << "[3,d,d]" << BoxVolume(7) << std::endl;
	std::cout << "[d,d,d]" << BoxVolume() << std::endl;
	return 0;
}
int BoxVolume(int length, int width, int height) {
	return length * width * height;
}

int BoxVolume(int length, int width) {
	std::cout << "hello" << std::endl;
	return length * width;
}

int BoxVolume(int length) {
	return length;
}
int BoxVolume() {
	return 0; 
}
