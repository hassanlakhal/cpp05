#include<iostream>


class A
{
private:
    /* data */
public:
   
    A();
    A(int a);
    class exceptionA : public std::exception
    {
      const char* what() const throw()
      {
            return "throw error ";
      }  
    };
    ~A();
};

A::A()
{

}

A::A(int a)
{
    if (a == 0)
        throw exceptionA();
}

A::~A()
{
    std::cout << " called Destructor " << std::endl;
    throw exceptionA();
}

int main1()
{
    try
    {
        A *a = new A(1);
        // throw A::exceptionA();
        delete a;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   return 1; 
}
int main()
{
    main1();
    system("leaks a.out");
}