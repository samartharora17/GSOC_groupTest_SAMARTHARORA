//
//  main.cpp
//  GSOC.cpp
//
//  Created by Samarth Arora on 15/08/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//time complexity: O(N)

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> input;
    int size,i,j;
    cin>>size;
    for( i=0;i<size;i++){
        cin>>j;
        input.push_back(j);
    }
    for(i=size-1;i>=0;i--)
        cout<<input[i]<<" ";
    return 0;
}
