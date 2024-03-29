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

Example f.dat file:
```dat
25 00 54 25 19 25 81 21 02 78
19 09 89 77 80 75 91 34 61 24
36 42 65 18 81 93 72 34 59 37
10 56 17 24 47 02 35 45 19 51
26 28 10 23 03 32 65 61 28 95
66 63 94 42 77 64 56 80 63 14
77 07 34 93 04 19 10 44 76 19
86 18 40 47 13 94 98 22 79 94
68 37 41 12 06 85 51 85 60 56
03 98 29 05 60 15 98 86 04 61
77 51 28 24 77 02 36 64 32 05
30 73 12 75 14 85 72 60 91 42
83 46 03 67 90 48 04 74 41 52
62 30 46 71 41 38 80 60 99 05
19 48 83 98 11 30 41 72 09 31
31 44 21 79 68 97 32 13 62 80
61 69 82 25 62 12 83 35 56 19
62 74 67 19 41 35 38 16 09 80
47 44 85 30 84 53 28 42 07 65
99 30 00 91 26 09 91 70 21 144
```

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
