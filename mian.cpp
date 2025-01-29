#include <iostream>
#include <exception>

class AA
{

    public :
        class MyException1 : public std::exception {
        public:
            const char* what() const throw()  {
                return "My custom exception occurred!1111111";
            }
        };
        class MyException2 : public std::exception {
        public:
            const char* what() const throw()  {
                return "My custom exception occurred!22222222";
            }
        };
};

int main() {
    try {
        throw AA::MyException2();
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
