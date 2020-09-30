## 540 - Team Queue
### Rachel Vetter 
### Description:

Queues and Priority Queues are data structures which are known to most computer scientists. The
Team Queue, however, is not so well known, though it occurs often in everyday life. At lunch time the
queue in front of the Mensa is a team queue, for example.
In a team queue each element belongs to a team. If an element enters the queue, it first searches
the queue from head to tail to check if some of its teammates (elements of the same team) are already
in the queue. If yes, it enters the queue right behind them. If not, it enters the queue at the tail
and becomes the new last element (bad luck). Dequeuing is done like in normal queues: elements are
processed from head to tail in the order they appear in the team queue.
Your task is to write a program that simulates such a team queue.

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.cpp](./main.cpp)     | Solution file                                              |
|   2   | [input](./input.txt)       | Test input file from problem statement                     |
|   3   | [input2](./input2.txt)     | Larger test input from udebug                              |
|   4   | [540.pdf](./540.pdf)   | UVa problem PDF                                            |


### Instructions

- This project was compiled using C++ 11 

### Sources