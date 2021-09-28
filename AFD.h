#ifndef AFD_H_INCLUDED
#define AFD_H_INCLUDED
#include <cstdio>
#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#define MAX_ALFA 10
#define MAX_EST 10
#include "AFD.cpp"
using namespace std;

vector<bool> AFD(ifstream &entrada);

#endif // AFD_H_INCLUDED
