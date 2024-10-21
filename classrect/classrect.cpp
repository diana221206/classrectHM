
#include <iostream>
 class Rect {
 private:
        int h; 
        int w; 

    public:
        Rect() : h(0), w(0) {}

        
        Rect(int height, int width) : h(height), w(width) {}

        void input() {
            std::cout << ;
            std::cin >> h;
            std::cout << ;
            std::cin >> w;
        }

        void output() const {
            std::cout << h << w << std::endl;
        }

        int area() const {
            return h * w;
        }
    };

    int main() {
        Rect rect; 
        rect.input(); 
        rect.output(); 
        std::cout << rect.area() << std::endl; 

        return 0;
        {
        }


