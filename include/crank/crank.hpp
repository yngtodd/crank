#pragma once
#ifndef CRANK_CRANK_HPP
#define CRANK_CRANK_HPP

#include <cstdint>
#include <iostream>

namespace crank {
    
    class MyClass
    {
    public:
        MyClass(const uint64_t size)
        : m_size(size)
        {

        }
        
        void hello_world()
        {
            std::cout<<"Hello World!\n";
        }
    private:
        uint64_t m_size;
    };

} // end namespace crank


#endif // CRANK_CRANK_HPP