//
//  main.cpp
//  cpp
//
//  Created by airbr on 9/1/18.
//  Licensed Creative Commons
//  Attribution 4.0 International (CC BY 4.0)



//int main()
//{
//    // Declaration
//    int x;
//    x = 5;
//    std::cout << (x + 5);
//
//
//    std::cout << "Hello world!" << std::endl;
//    /*
//     *  Pretty comments
//     *
//     */
//    return 0;
//}

// Example of an unitialized variable problem:

#include <iostream>

void doNothing(const int &x)
{
}

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized
    
    doNothing(x); // make compiler think we're using this variable
    
    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x;
    
    return 0;
}

// Rule: Make sure all of your variables have known values (either through initialization or assignment)
