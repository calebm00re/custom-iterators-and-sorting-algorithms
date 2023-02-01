# Custom Iterators and Sorting Algorithms

### Project:
In these files, I have created a vector container, doubly linked list, and a dictionary in the form of a balanced binary search tree. In addition to having created these functional containers. They have functional iterators that can be used in traversing the containers. The list and dictionary both have a
functioning forwards iterator and the vector container has both forwards and random access iterator functionality. To make use of these iterators, I have included a namespace that will perform different algorithms onto these containers by using their iterators. In this namespace is a functional find function
to find an element in the container, as well as heap, insertion and quick(-) sort. Further documentation and usage documentation will be provided below in their respective sections. 
  - to run the program run the executable with no additional command line arguments


### Algorithms:

- find: this part of the "algos" namespace will take in three parameters. The first two will be the beginning and end iterators to the beginning and end of the range that is going to be searched. The third and final parameter is the element that is being
searched for. When the algorithm is used it will return and iterator to the element if it is found or to the end iterator if the element is not found in the given range. The following would be an example of running the find algorithm on one of my
containers, "test", containing int types and looking for the value 3: 
```
  algos::find(test.begin(), test.end(), 3);
```


- Insertion Sort, Heap Sort, Quicksort: all three of these algorithms do exactly what they say in their names. They perform their respective operations using the custom vector container's random access iterator "rit". All three will sort the container
in their own way of sorting described by their name, but they will all be called with the same arguments and end with the same result. To call one in the namespace the function will be the name of the sorting or "heapSort", "insertionSort", and "quickSort" respectively with
arguments of the random access iterator to the beginning "rbegin" and the size of the container to be sorted. An example of calling each of these three is as follows for a custom vector with name "test":
```
  algos::heapSort(test.rbegin(), test.get_size());
  algos::insertionSort(test.rbegin(), test.get_size());
  algos::quickSort(test.rbegin(), test.get_size());
```

## Note:
The algorithms are set up to run on the custom vectors containing data types with comparators and assignments overridden or standard. If the data types
comparators meet these requirements the sorting will have no issue. This is also the methodology behind custom comparators: change or overwrite them for the
chosen data type. 


### Data from sorting algorithms
The code has a file that will generate and create a spreadsheet from timed data gathered from running the sorting algorithms with the same data of different sizes and duplicate values.
The code will be run with different sizes for all: ascending, descending, random, and random with X% duplicate values.


having run the code with different values in different configurations the following graphs were created by having the program make a csv file and then using that in excel to create graphs from the data. The graph label describes the y axis representing time, x axis representing data size(mine are not super large as my computer could not handle some of the really large data sets, so I shrunk them by several factors of magnitude, and the X% is the percent of duplicates in the data set being graphed. The raw data can be found in "pa02_data.csv". The data graphed as follows:

![Screen Shot 2021-10-18 at 4 58 05 AM](https://user-images.githubusercontent.com/72896477/137710559-a60b7719-5ba6-4aa5-b996-da8cadc661f9.png)
![Screen Shot 2021-10-18 at 4 58 17 AM](https://user-images.githubusercontent.com/72896477/137710980-9dcbe47f-17ef-46cf-8d3e-afb4ce8f1111.png)
![Screen Shot 2021-10-18 at 4 58 25 AM](https://user-images.githubusercontent.com/72896477/137710995-a9d90aef-d423-4567-9c15-bffddec8d4ef.png)
![Screen Shot 2021-10-18 at 4 58 45 AM](https://user-images.githubusercontent.com/72896477/137711004-106815f6-15f1-41a8-859e-ea10fb5d9e6b.png)
![Screen Shot 2021-10-18 at 4 58 55 AM](https://user-images.githubusercontent.com/72896477/137711017-8863fd5a-b686-4599-b3a8-997bf4cb59e2.png)

### Generating data
I fully understand I did this nearly as inefficiently as possible. If I were to do it again, with more time, I would create a very simple function that takes in some size, percent duplicate, and ordering parameters and have it simply and quickly give me the results I was looking for. However, I chose to make them one at a time first in a vector to shuffle or create in ascending, descending or have a percent of duplicate values. I then transfered them to my DSvector where they would be passed to the sorting algorithms for sorting. To make them in order asc/desc, I went through a loop simply decrementing the next value. The percent of duplicates is merely a starting over of the loop when the larger percent has been reached. this will ensure the proper percent by simply counting up from the beggining the proper number of times. 

### Conclusion from Data
The first thing I noticed was that the sorts all took the same amount of time, comparitively, when the data was random. The percent of dupicated did not seem to play a part in shifting one algorithm above the rest. With the random data sets, heap sort was slower for the very, very small containers, but was quickly passed, in terms of duration to sort, by both quick and insertion sort. From there, as the sets grow larger, insertion sort begins to be the slowest by far for every randomly ordered dataset. However, it out paces quicksort in the descending order set and they are both far outpaced by heap sort. This is to be expected for the descending order. Lastly, also to be expected, quicksort takes dramatically longer when compared to the other algorithms when the elements are already in order prior to calling a sorting function. On the other hand, even as the set gets larger and larger, heap and insertion sorting times stay extremely low.

### Using strings
If I were to make this use strings, I would choose to keep my numbers and simply convert them to std::strings. This way I would have an easy way of ensuring the proper number of duplicates. So if there was a required minimum length to said string, I would just add the necessary number of 0's. I would expect this to be exponentially slower as it will have to do far more comparisons as opposed to the tests with int's I have conducted. 

### Sources 
https://www.geeksforgeeks.org/iterative-quick-sort/

https://www.geeksforgeeks.org/iterative-heap-sort/

https://www.geeksforgeeks.org/insertion-sort/

https://internalpointers.com/post/writing-custom-iterators-modern-cpp
