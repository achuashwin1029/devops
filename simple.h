#include <iostream>

#ifndef Simple_H
#define Simple_h
class MyClass
{
public:
        MyClass(uint32_t a, uint32_t b) : m_A(a), m_B(b)
        {
		std::cout << __FILE__ <<"\n";
                std::cout<<"\n MyClass constructor\n";
        }
        ~MyClass()
        {
                std::cout<<"\n Destructor\n";
        }

        uint32_t Add()
        {
          return m_A + m_B;
        }

private:
        uint32_t m_A;
        uint32_t m_B;
};

#endif
