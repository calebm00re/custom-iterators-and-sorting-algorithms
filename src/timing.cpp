//
// Created by Caleb Moore on 10/18/21.
//

#include "timing.h"

void timing::make_data() {
    //make file
    ofstream file;
    file.open("pa02_data.csv");

    file << "rand with 0% duplicates" << endl;
    file << "size,quick,heap,insertion" << endl;

    vector<int> one;
//first criteria
    {
        //10
        if (true) {
            for (int i = 0; i < 10; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "10," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //50
        if (true) {
            for (int i = 0; i < 50; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "50," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //100
        if (true) {
            for (int i = 0; i < 100; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "100," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //200
        if (true) {
            for (int i = 0; i < 200; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "200," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //250
        if(true) {
            for (int i = 0; i < 250; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "250," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }

        //500
        if(true) {
            for (int i = 0; i < 500; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "500," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }
    }
    file << endl << endl;
    file << "asc. order with 0% duplicates" << endl;
    file << "size,quick,heap,insertion" << endl;
//second criteria
    {
        //10
        if (true) {
            for (int i = 0; i < 10; i++) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "10," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //50
        if (true) {
            for (int i = 0; i < 50; i++) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "50," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //100
        if (true) {
            for (int i = 0; i < 100; i++) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "100," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //200
        if (true) {
            for (int i = 0; i < 200; i++) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "200," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //250
        if(true) {
            for (int i = 0; i < 250; i++) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "250," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }

        //500
        if(true) {
            for (int i = 0; i < 500; i++) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "500," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }
    }
    file << endl << endl;
    file << "desc. order with 0% duplicates" << endl;
    file << "size,quick,heap,insertion" << endl;
//third criteria
    {
        //10
        if (true) {
            for (int i = 10; i > 0; i--) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "10," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //50
        if (true) {
            for (int i = 50; i > 0; i--) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "50," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //100
        if (true) {
            for (int i = 100; i > 0; i--) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "100," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //200
        if (true) {
            for (int i = 200; i > 0; i--) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "200," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //250
        if(true) {
            for (int i = 250; i > 0; i--) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "250," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }

        //500
        if(true) {
            for (int i = 500; i > 0; i--) {
                one.push_back(i);
            }
            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "500," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }
    }
    file << endl << endl;
    file << "rand order with 20% duplicates" << endl;
    file << "size,quick,heap,insertion" << endl;
//fourth criteria
    {
        //10
        if (true) {
            for (int i = 0; i < 8; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 2; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "10," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //50
        if (true) {
            for (int i = 0; i < 40; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 20; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "50," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //100
        if (true) {
            for (int i = 0; i < 80; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 20; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "100," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //200
        if (true) {
            for (int i = 0; i < 160; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 40; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "200," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //250
        if(true) {
            for (int i = 0; i < 200; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 50; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "250," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }

        //500
        if(true) {
            for (int i = 0; i < 400; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 100; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "500," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }
    }
    file << endl << endl;
    file << "rand order with 40% duplicates" << endl;
    file << "size,quick,heap,insertion" << endl;
//fifth criteria
    {
        //10
        if (true) {
            for (int i = 0; i < 6; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 4; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "10," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //50
        if (true) {
            for (int i = 0; i < 30; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 20; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "50," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //100
        if (true) {
            for (int i = 0; i < 60; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 40; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "100," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //200
        if (true) {
            for (int i = 0; i < 120; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 80; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "200," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << endl;
            one.clear();
        }

        //250
        if(true) {
            for (int i = 0; i < 150; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 100; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "250," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }

        //500
        if(true) {
            for (int i = 0; i < 300; i++) {
                one.push_back(i);
            }
            for(int i = 0; i < 200; i++) {
                one.push_back(i);
            }
            auto rng = std::default_random_engine{};
            std::shuffle(std::begin(one), std::end(one), rng);

            DSVector<int> first, second, third;

            for (auto i: one) {
                first.push_back(i);
                second.push_back(i);
                third.push_back(i);
            }

            //quick
            start = std::chrono::high_resolution_clock::now();
            algos::quickSort(first.rbegin(), first.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << "500," << time.count() << ",";

            //heap
            start = std::chrono::high_resolution_clock::now();
            algos::heapSort(second.rbegin(), second.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file << time.count() << ",";

            //insert
            start = std::chrono::high_resolution_clock::now();
            algos::insertionSort(third.rbegin(), third.get_size());
            end = std::chrono::high_resolution_clock::now();
            time = end - start;
            file<< time.count() << endl;
            one.clear();
        }
    }
    file.close();
}
