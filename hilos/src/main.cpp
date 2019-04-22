#include <iostream>
#include <thread>


void thread_function()
{
    std::cout << "hola a todos" << std::endl;
}

int main(int argc, char const *argv[])
{
    
    std::thread t1(thread_function);

    t1.join();
    return 0;
}
