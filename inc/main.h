#ifndef __MAIN_H__
#define __MAIN_H__

#ifdef MODULE_ENABLED

#include <iostream>

class S {
public:
    void hello() const {
        std::cout<<"Hello world!"<<std::endl;
    }
};

#endif // MODULE_ENABLED

#endif /* __MAIN_H__ */
