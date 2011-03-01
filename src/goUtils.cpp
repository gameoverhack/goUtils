/*
 *  goUtils.cpp
 *
 *  Created by gameover (Matthew Gingold) on 22/03/10.
 *
 */

#include "goUtils.h"

// string conversion from http://www.dreamincode.net/code/snippet39.htm

//------------------------------------------------
// change each element of the string to upper case
string toUpper(string strToConvert)
{
    for(unsigned int i=0; i<strToConvert.length(); i++)
    {
        strToConvert[i] = toupper(strToConvert[i]);
    }
    return strToConvert;//return the converted string
}

//------------------------------------------------
// change each element of the string to lower case
string toLower(string strToConvert)
{
    for(unsigned int i=0; i<strToConvert.length(); i++)
    {
        strToConvert[i] = tolower(strToConvert[i]);
    }
    return strToConvert;//return the converted string
}

// vector utils

//------------------------------------------------
// return the sum of a vector filled with ints
int	sumVector(vector<int> * vec)
{

    int		sum = 0;
    int		siz = vec->size();

    for (int i = 0; i < siz; i++) sum += vec->at(i);

    return sum;

}

//------------------------------------------------
// return the sum of a vector filled with floats
float sumVector(vector<float> * vec)
{

    float	sum = 0;
    int		siz = vec->size();

    for (int i = 0; i < siz; i++) sum += vec->at(i);

    return sum;

}
//------------------------------------------------
// return the average of a vector filled with ints
int	averageVector(vector<int> * vec)
{

    return sumVector(vec)/vec->size();

}

//------------------------------------------------
// return the average of a vector filled with floats
float averageVector(vector<float> * vec)
{

    return sumVector(vec)/vec->size();

}

//------------------------------------------------
// fill a vector of size random numbers between s and e
void uniqueRandomVector(vector<int> * vec, int size, int s, int e)
{

    int tRandom = (int)ofRandom(s, e+1);
    bool alreadyInVec = false;

    for(int i = 0; i < vec->size(); i++)
    {
        if(vec->at(i) == tRandom)
        {
            alreadyInVec = true;
            break;
        }
    }

    if(!alreadyInVec) vec->push_back(tRandom);

    if(vec->size() != size && e-s+1 >= size) uniqueRandomVector(vec, size, s, e);

}

// array utils
int getIndexOfMinimum(int * array, int size)
{
    int minIndex = -1;
    int smallestValue = 1e50f;
    for (int i = 0; i < size; i++)
    {
        if(array[i] < smallestValue)
        {
            smallestValue = array[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int getIndexOfMaximum(int * array, int size)
{
    int maxIndex = -1;
    int largestValue = -1e50f;
    for (int i = 0; i < size; i++)
    {
        if(array[i] > largestValue)
        {
            largestValue = array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

void shuffleVector(vector<int> * vec)
{
    int size = vec->size();
    for (int i = 0; i < size; i++)
    {
        int r = i + (int)ofRandom(0, size-i); // Random remaining position.
        int temp = vec->at(i);
        vec->at(i) = vec->at(r);
        vec->at(r) = temp;
    }
}

void shuffleArray(int * array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int r = i + (int)ofRandom(0, size-i); // Random remaining position.
        int temp = array[i];
        array[i] = array[r];
        array[r] = temp;
    }
}
