#include <iostream>

class A
{
protected:
    std::string name;

public:
    A();
    A(std::string name);
   void display()
   {

   };
    virtual ~A();
};

A::A()
{
    // std::cout << " Base class " << std::endl;
}

A::A(std::string name)
{
    this->name = name;
    std::cout << " Base class " << std::endl;
}

A::~A()
{
     std::cout << " Base class " << std::endl;
}

class B : public A
{
public:
    B();
    B(std::string name);
    void display()
    {
        std::cout << "B: " << this->name << std::endl;
    }
    ~B();
};

B::B()
{
    // std::cout << " Derive class B" << std::endl;
}

B::B(std::string name) : A(name + "_from_B")
{
    std::cout << "---> Derive class B" << std::endl;
}

B::~B()
{
     std::cout << " Derive class " << std::endl;
}


int main1()
{
    A *a = new B;

    delete a;
  
    return 0;
}
int main()
{
  main1();
  system("leaks a.out");
}