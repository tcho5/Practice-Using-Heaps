#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>

#include "Dish.h"

using namespace std;

Dish::Dish(){}

int Dish::insert(string s){
	if(SIZE > 1024)return -1;
	alphaArray[SIZE] = SIZE;
	shortestArray[SIZE] = SIZE;
	stringArray[SIZE] = s;
	SIZE++;

	BuildMinHeap(SIZE-1);	

	for(int i = 1; i <= SIZE-1; i++){
		if(stringArray[i] == s) {
			cout << i << endl;
			return i;
		}
	}
}	
int Dish::find(string s){
	for(int i = 1; i <= SIZE-1; i++){
		if(stringArray[i] == s){
			return i;}
	}
	return -1;
}		
bool Dish::capitalize(int k){
	if(k > SIZE-1) return false;
	else{
		string temp = stringArray[k];
		temp[0] = toupper(temp[0]);
		stringArray[k] = temp;
		MinHeapify(k, SIZE-1);
		return true;
	}	
}
bool Dish::allCaps(int k){
	if(k >= SIZE) return false;
	else{
		string temp = stringArray[k];

		for(int i = 0; i < temp.length(); i++){
			temp[i] = toupper(temp[i]);
		}
		stringArray[k] = temp;
		MinHeapify(k, SIZE-1);
		return true;
	}
}	
bool Dish::truncate(int k, int i){
	if(k >= SIZE){return false;}
	else{
		string temp = stringArray[k];
		temp.erase(i);
		stringArray[k] = temp;
		MinHeapify(k, SIZE-1);
		return true;
	}
}
void Dish::MinHeapify(int i, int n){
	int l = 2*i;
	int r = (2*i) + 1;
	int minAlpha, minStrLength;
	if(l<=n && stringArray[alphaArray[l]] < stringArray[alphaArray[i]]) minAlpha = l;
	else{minAlpha = i;}
	if(r <= n && stringArray[alphaArray[r]] < stringArray[alphaArray[minAlpha]]) minAlpha = r;
	if(minAlpha != i){std::swap(alphaArray[i], alphaArray[minAlpha]);}

	if(l<=n && stringArray[shortestArray[l]].length() < stringArray[shortestArray[i]].length()) minStrLength = l;
	else{minStrLength = i;}
	if(r <= n && stringArray[shortestArray[r]].length() < stringArray[shortestArray[minStrLength]].length()) minStrLength = r;
	if(minStrLength != i){std::swap(shortestArray[i], shortestArray[minStrLength]);}
}
void Dish::BuildMinHeap(int n){
	for(int i = n/2; i >= 1; i--) {MinHeapify(i, n);}
}
string Dish::getshortest(){return stringArray[shortestArray[1]];}
		
string Dish::getfirst(){return stringArray[alphaArray[1]];}


