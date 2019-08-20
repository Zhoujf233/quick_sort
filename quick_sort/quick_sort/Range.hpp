//
//  Range.hpp
//  quick_sort
//
//  Created by JF Zhou on 2019/8/20.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Range_h
#define Range_h

class Range
{
public:
    Range new_Range(int s, int e);
    void swap(int *x, int *y);
    void quick_sort(int arr[], const int size);
private:
    int start,end;
};

#endif /* Range_h */
