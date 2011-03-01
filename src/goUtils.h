/*
 *  goUtils.h
 *
 *  Created by gameover (Matthew Gingold) on 22/03/10.
 *
 */

#ifndef __GO_UTILS_H
#define __GO_UTILS_H

#include "ofMain.h"

// string utils
string	toUpper(string strToConvert);
string	toLower(string strToConvert);

// vector utils
int		sumVector(vector<int> * vec);
float	sumVector(vector<float> * vec);
int		averageVector(vector<int> * vec);
float	averageVector(vector<float> * vec);
void	uniqueRandomVector(vector<int> * vec, int size, int s, int e);
void	shuffleVector(vector<int> * vec);

// array utils
int		getIndexOfMinimum(int * array, int size);
int		getIndexOfMaximum(int * array, int size);
void	shuffleArray(int * array, int size);

#endif
