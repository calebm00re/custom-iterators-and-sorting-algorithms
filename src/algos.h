//
// Created by Caleb Moore on 10/4/21.
//

#ifndef INC_21F_PA02_CALEB2_ALGOS_H
#define INC_21F_PA02_CALEB2_ALGOS_H
#include <stack>

namespace algos {
    template<class A, class B>
    A find(A begin, A end, B key) {
        while (begin != end) {
            if (begin == key) {
                return begin;
            }
            begin++;
        }
        return end;
    }

    //heapsort
    template<class it>
    void buildMaxHeap(it begin, int n) {
        for (int i = 1; i < n; i++) {
            if (begin[i] > begin[(i - 1) / 2]) {
                int j = i;
                while (begin[j] > begin[(j - 1) / 2]) {
                    std::swap(begin[j], begin[(j - 1) / 2]);
                    j = (j - 1) / 2;
                }
            }
        }
    }

    template<class it>
    void heapSort(it begin, int n) {
        buildMaxHeap(begin, n);
        for (int i = n - 1; i > 0; i--) {
            std::swap(begin[0], begin[i]);
            int j = 0, index;

            do {
                index = (2 * j + 1);

                if (begin[index] < begin[index + 1] &&
                    index < (i - 1))
                    index++;

                if (begin[j] < begin[index] && index < i)
                    std::swap(begin[j], begin[index]);

                j = index;

            } while (index < i);
        }
    }

    //insertion
    template <class it>
    void insertionSort(it begin, int n) {
        int i, key, j;
        for (i = 1; i < n; i++) {
            key = begin[i];
            j = i - 1;

            while (j >= 0 && begin[j] > key) {
                begin[j + 1] = begin[j];
                j = j - 1;
            }
            begin[j + 1] = key;
        }
    }

    //quicksort
    template<class it>
    int partition(it begin, int start, int num) {
        int x = begin[num];
        int i = (start - 1);

        for (int j = start; j <= num - 1; j++) {
            if (begin[j] <= x) {
                i++;
                std::swap(begin[i], begin[j]);
            }
        }
        std::swap(begin[i + 1], begin[num]);
        return (i + 1);
    }

    template<class it>
    void sqSort(it begin, int start, int num) {
        if (start < num) {
            int p = partition(begin, start, num);
            sqSort(begin, start, p - 1);
            sqSort(begin, p + 1, num);
        }
    }
    template<class it>
    void quickSort(it begin, int n){
        sqSort(begin, 0, n-1);
    }
}

#endif //INC_21F_PA02_CALEB2_ALGOS_H
