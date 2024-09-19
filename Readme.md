# Readme

This is the source code for my paper, A Similarity-based Approach for Efficient Large Quasi-clique Detection, which has been accepted by WWW 2024. 
The program is written in C++ code. It uses only the basic library, so you can compile it in any environment.

## Dataset infor

All datasets used in our experiments are from [SNAP](https://snap.stanford.edu/data/).

## How to run the code

To compile the program, first put all the source files in a directory, and just execute

```
make
```

Then, you can execute "FastNBSim". The format of the input parameter is,

```
./FastNBSim input-filename gamma b k
```

For example, `./FastNBSim ER.txt 0.9 0.6 8` is running `FastNBSim` on ER dataset to with gamma = 0.9, b = 0.6 and k = 8.

If you want to excute "NBSim". The format of the input parameter is,

```
./FastNBSim input-filename gamma b
```

## How to reproduce the experimental results

To obtain the `FastNBSim` results in Tables 2-3 and Figure 4, set `gamma = 0.9, b = 0.6, and k = 8` across all 10 datasets. For the `NBSim` results, set `gamma = 0.9` and `b = 0.6` for each dataset, without specifying k.

For Figure 5, set `gamma = 0.9` and change b from 0.5 to 0.9 to get (a) (c) (e) and set `b = 0.6` and change b from 0.5 to 0.9 to get (b) (d) (f).

For Figure 6, set gamma = 0.9, b = 0.6 for `k = null, 4, 8, 16, 32, 64, 128`.
