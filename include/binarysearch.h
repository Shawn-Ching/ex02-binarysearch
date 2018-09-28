//
// Created by Shawn Ching on 9/13/18.
//

#ifndef EX02_BINARYSEARCH_BINARYSEARC_H
#define EX02_BINARYSEARCH_BINARYSEARC_H

#include <cstdlib>
#include <cstdint>

///Recursive///
/*
namespace edu { namespace vcccd { namespace vc { namespace csv15 {
                template<class T>
                int64_t binarysearch(const T &value, T array[], size_t size)
                {
                    if (size == 0) return -1;
                    size_t guess = size / 2;
                    if (value == array[guess])
                    {
                        return guess;
                    }
                    if (value < array[guess])
                    {
                        return binarysearch(value, array, guess);
                    }
                    if (value > array[guess])
                    {
                        size_t index = binarysearch(value, array, guess);
                        return index < 0 ? index : index + guess;

                        //return guess + binarysearch(value, &array[guess], size);
                    }
                    return -1;
                }
}}}}
*/
///
/*
namespace edu { namespace vcccd { namespace vc { namespace csv15 {

                template<class T>
                int64_t binarysearch(const T &value, T array[], size_t size) {
                    size_t first = 0;
                    if (first <= size) {
                        size_t guess = (first + size) / 2;
                        if (value == array[guess]) {
                            return guess;
                        }
                        if (value < array[guess]) {
                            return binarysearch(value, array, guess - 1);
                        }
                        if (value > array[guess]) {
                            return binarysearch(value, array, guess+1, size);
                        }
                    }
                    return -1;
                }
            }}}}
*/


///Alden's Help.///

namespace edu { namespace vcccd { namespace vc {namespace csv15 {
                template <class T>
                int64_t binarysearch(const T &value, T array[], size_t size)
                {
                    size_t guess = size / 2;
                    for (size_t First = 0, Last = size - 1; Last >= First ; guess = (First + Last) / 2) //Prof. Knight's code
                        // Changed First - Last > 0, wasn't returning -1 for low values
                    {
                        if (value > array[guess])
                        {
                            First = guess + 1; //make left index start at the midpoint but don't include it because it was already checked.
                        }
                        else if (value < array[guess])
                        {
                            Last = guess - 1; //make right index start at the midpoint but don't include it.
                        }
                        else
                        {
                            return guess;
                        }
                    }
                    if (value == array[guess])
                    {
                        return guess;
                    }
                    return -1; //because when left index is equal to the right and still was not found it most likely doesnt exist;
                }
}}}}
#endif //EX02_BINARYSEARCH_BINARYSEARC_H
