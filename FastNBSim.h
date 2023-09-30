//
//  findClique.h
//  find_cliuqe_f
//
//  Created by 庞嘉扬 on 2023/4/5.
//

#ifndef FastNBSim_h
#define FastNBSim_h

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <unordered_set>
#include <iomanip>


using namespace std;

bool use_signature = false;

int n, m;
int cur_sol_vertex = 0;
int cur_sol_size = 0;
int cur_sol_edges = 0;
int operations = 0;
int k;
int p = pow(2,31) - 1;
double ts;
double cur_sol_quasi;
double f;
double b;


vector<vector<int>> neighbor;
vector<int> degree;
vector<int> kcore_size;
vector<pair<int,int>> sorted_vertex;
vector<int> cur_sol;
vector<int> vec_a;
vector<int> vec_b;
vector<int> vis;
vector<vector<int>> signature;



void initial_variable();
void read_graph(string filename);
void get_k_signatures(int node);
void sort_vertex();
void iterate_vertex();
int core_num(int node);
int sift_num(int node);
double ct_score(int v1, int v2);
double ct_score_minhash(int v1, int v2);
double get_quasi(int node);
void get_res();



#endif /* FastNBSim_h */
