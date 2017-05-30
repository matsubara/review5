//
//  main.cpp
//  Review5
//
//  Created by Mauricio Matsubara on 30/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

/*
 
 1. Create a function that sums 2 integer values and use it
 2. Create another function that sums 2 float values and use it
 
 */

#include <iostream>

int plusInt (int a, int b) {
    return a + b;
}

float plusFloat (float d, float e){
    return d + e ;
}

int main(int argc, const char * argv[]) {
   
    int a;
    int b;
    int c;
    a = 12;
    b= 24;
    c = plusInt(a, b);
    
    std::cout<< c << "\n";
    
    float d;
    float e;
    float f;
    d = 10.5;
    e = 12.75;
    f = plusFloat(d,e);
    
    std::cout<< f << "\n";
    return 0;
}
