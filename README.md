# Project Title

Down-Heap Algorithm

# Description

The program reads 200 2-digit integers from text file “f.dat” and stores the
integers in an array of 20 rows and 10 columns. The program treats each row of the array as
an object, with the sum of the first three integers being the key, and the other seven integers
being the information content. 

The program performes a down-heap using the keys (sum of first 3 integers in row) as the priority weight:

* Each Row is one object
* Each object has a key (sum of first 3 integers)
* Each object has a data component (remaining 7 integers)
* Each object is contained in a node
* Tree is constructed and down-heap is performed on data
* Output prints on cmnd line

# Author Information

Contact: walitemuri@gmail.com

# Running

```
    make
```

```
    running: ./A4
```

# Sample Output
![Screen Shot 2022-11-22 at 4 00 55 AM](https://user-images.githubusercontent.com/108627530/203271266-4ae274a2-94be-44ca-a7ed-a381f9952fe9.png)
![Screen Shot 2022-11-22 at 4 01 56 AM](https://user-images.githubusercontent.com/108627530/203271296-8b9cb7bd-d1c0-4cf4-bf53-b941ca3fd252.png)
