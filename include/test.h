#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CASE(exp, var) if (exp) { var++; }

int testInit(int n);
int testDestroy(int n);
int testSplice(int n);
int testBuild(int n, int size);
int testGetIndex(int n, int size);
int testSplay(int n, int size);

int genReport(int errors, int tests, const char * message);

#endif
