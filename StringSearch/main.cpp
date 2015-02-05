//
//  main.cpp
//  StringSearch
//
//  Created by Vinod Gupta on 2/4/15.
//  Copyright (c) 2015 vinodg. All rights reserved.
//

#include <iostream>

const char *StringSearch(const char *text,const char *pattern)
{
    int i=0;
    while(text[i] != '\0')
    {
        int j=0;
        while(text[i]==pattern[j])
        {
            if(pattern[j+1] == '\0')
                return &text[i-j];
            
            ++j;
            ++i;
        }
        
        if(j)//This could be eliminated in KMP algo
            i-=j;

        ++i;
    }
    return NULL;
}

int main(int argc, const char * argv[]) {
    
    char text[] = "This is Vinod Gupta herhere here...";
    char pattern[] = "here";
    
    std::cout << strstr(text,pattern)<<std::endl;
    std::cout << StringSearch(text,pattern)<<std::endl;
    return 0;
}
