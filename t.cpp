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
        std::cout << "A: " << this->name << std::endl;
    }
    ~A();
};

A::A()
{
    std::cout << " Base class " << std::endl;
}

A::A(std::string name)
{
    this->name = name;
    std::cout << " Base class " << std::endl;
}

A::~A()
{
}

class B : virtual public A
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
    std::cout << " Derive class B" << std::endl;
}

B::B(std::string name) : A(name + "_from_B")
{
    std::cout << "---> Derive class B" << std::endl;
}

B::~B()
{
}

class C : virtual public A
{
public:
    C();
    C(std::string name);
    void display()
    {
        std::cout << "C: " << this->name << std::endl;
    }
    ~C();
};

C::C()
{
    std::cout << " Derive class C" << std::endl;
}

C::C(std::string name) : A(name + "_from_C")
{
    std::cout << " ----->Derive class C" << std::endl;
}

C::~C()
{
}

class D : public C, public B
{
private:
    std::string name;

public:
    D();
    D(std::string name) : A(name + "_abc")
    {
        this->name = name;
    }
    ~D();
    void test()
    {
        std::cout << "D: " << name << "\t" << A::name << "\t"<< B::name<< std::endl;
    }
};

D::D()
{
}

D::~D()
{
}

int main()
{
    D a("test");
    a.test();

    return 0;
}
