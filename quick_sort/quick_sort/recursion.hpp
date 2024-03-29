//
//  recursion.hpp
//  quick_sort
//
//  Created by JF Zhou on 2019/8/20.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef recursion_h
#define recursion_h

//递归法
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void quick_sort_recursive(int arr[], int start, int end)
{
    if(start >= end)return;
    int mid = arr[end];
    int left = start, right = end - 1;
    while(left < right)
    {
        while(arr[left] < mid && left < right)
        {
            left++;
        }
        while(arr[right] >= mid && left < right)
        {
            right--;
        }
        swap(&arr[left], &arr[right]);
    }
    if(arr[left] >= arr[end])
    {
        swap(&arr[left], &arr[end]);
    }
    else
    {
        left++;
    }
    if(left)
    {
        quick_sort_recursive(arr, start, left - 1);
    }
    quick_sort_recursive(arr, left + 1, end);
}

void quick_sort(int arr[], int size)
{
    quick_sort_recursive(arr, 0, size - 1);
}

#endif /* recursion_h */
