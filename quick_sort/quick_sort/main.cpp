//
//  main.cpp
//  quick_sort
//
//  Created by JF Zhou on 2019/8/20.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
#include "recursion.hpp"
//#include "iteration.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    //Range r;
    int arr[] = {89,22,-3,32,82,55,22,50,37,5,64,35,9,70};
    int size = (int) sizeof(arr)/sizeof(*arr);
    int i;
    cout<<"初始顺序为: ";
    for(i = 0;i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //r.quick_sort(arr, size);
    quick_sort(arr, size);
    
    cout << "快速排序后顺序为：";
    for(i = 0;i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
