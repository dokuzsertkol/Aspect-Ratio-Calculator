#include <iostream>

int main() {
	
	std::cout << "Coded by EmreHero~\n\n";
	
	int width, height;
	
	std::cout << "Width?\n>> ";
	std::cin >> width;
	std::cout << "Height?\n>> ";
	std::cin >> height;
	
	for(int i = 2; i <= height && i <= width; i++) {
		if (width%i == 0 && height % i == 0) {
			
			width /= i;
			height /= i;
		}
	}
	
	std::cout << "Aspect ratio is " << width << ":" << height << std::endl;
	
	system("pause");
}
