#include <iostream>
#include <memory>
#include "simple.h"

int main()
{
	std::cout<<"\n Sample Program\n";
        {
        auto spMyClass = std::make_shared<MyClass>(10, 20);
        auto res = spMyClass->Add();
        std::cout<<"\n res: "<<res<<"\n";
        }

        MyClass obj(30, 10);
        auto res = obj.Add();

        std::cout<<"\n res = "<<res<<"\n";

        auto ob = new MyClass(50, 100);
        std::cout<<"\n res = "<<ob->Add()<<"\n";
}
