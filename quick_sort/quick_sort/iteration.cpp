//
//  iteration.cpp
//  quick_sort
//
//  Created by JF Zhou on 2019/8/20.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <stdio.h>
//#include "iteration.hpp"

//迭代法
//Range Range::new_Range(int s, int e)
//{
//    Range r;
//    r.start = s;
//    r.end = e;
//    return r;
//}
//
//void Range::swap(int *x, int *y)
//{
//    int t = *x;
//    *x = *y;
//    *y = t;
//}
//
//void Range::quick_sort(int arr[], const int size)
//{
//    if(size <= 0)return;//避免size等于负值时引发段错误(Segment Fault)
//    Range r[size];//r[]模拟列表,p为数量,r[p++]为push,r[--p]为pop且取得元素
//    int p = 0;
//    r[p++] = new_Range(0,size - 1);
//    while(p)
//    {
//        Range range = r[--p];
//        if(range.start >= range.end)continue;
//        int mid = arr[(range.start + range.end) / 2];//选取中间点为基准点
//        int left = range.start,right = range.end;
//        do
//        {
//            while(arr[left] < mid) ++left;//检测基准点左侧是否符合要求
//            while(arr[right] > mid) --right;//检测基准点右侧是否符合要求
//            if(left <= right)
//            {
//                swap(&arr[left],&arr[right]);
//                left++;right--;//移动指针以继续
//            }
//        }
//        while(left <= right);
//        if(range.start < right) r[p++] = new_Range(range.start, right);
//        if(range.end > left) r[p++] = new_Range(left,range.end);
//    }
//}

