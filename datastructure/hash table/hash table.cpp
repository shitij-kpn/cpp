#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

using namespace std;

class HashTable{
private:
	static const int hashGroups = 10;
	list<pair<int , string>> table[hashGroups];

public:
	bool isEmpty();
	int hashFunction(int key);
	void insertItem(int key , string value);
	void removeItem(int key);
	string searchTable(int key);
	void printTable();

};

bool HashTable::isEmpty(){
	int sum{};

	for(int i{};i<hashGroups;i++){
		sum += table[i].size();
	}

	if(!sum){
		return true;
	}

	return false;
}

int HashTable::hashFunction(int key){
	return key % hashGroups;
}

void HashTable::insertItem(int key,string value){
	int hashValue = hashFunction(key);
	auto &cell = table[hashValue];
	bool keyExists = false;
	auto bItr = begin(cell);

	for(;bItr!=end(cell);bItr++){
		if(bItr->first == key){
			keyExists = true;
			bItr->second = value;
			cout<<"value replaced"<<endl;
			break;
		}
	}

	if(!keyExists){
		cell.emplace_back(key , value);
	}
}


void HashTable::removeItem(int key){
	int hashValue = hashFunction(key);
	auto &cell = table[hashValue];
	bool keyExists = false;
	auto bItr = begin(cell);

	for(;bItr!=end(cell);bItr++){
		if(bItr->first == key){
			keyExists = true;
			bItr = cell.erase(bItr);
			cout<<"Record deleted"<<endl;
			break;
		}
	}

	if(!keyExists){
		cout<<"Record not found"<<endl;
	}
}

void HashTable::printTable(){
	if(isEmpty()){
		cout<<"The list is empty"<<endl;
	}
	else{
		for(int i{}; i < hashGroups ; i++){
			auto bItr = table[i].begin();

			for(;bItr != table[i].end();bItr++){
				cout<<"key  "<<bItr->first<<"  value: "<<bItr->second<<endl;
			}
		}
	}
}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	HashTable HT;

	if(HT.isEmpty()){
		cout<<"the list is empty"<<endl;
	}
	else{
		cout<<"error the list is not empty"<<endl;
	}

	int x;
	string s;
	for(int i=0;i<10;i++){
		cin>>x>>s;
		HT.insertItem(x,s);
	}

	HT.printTable();

	HT.removeItem(111);

	HT.removeItem(555);

	HT.removeItem(1010);

	if(HT.isEmpty()){
		cout<<"error no items added"<<endl;
	}
	else{
		cout<<"correct ans"<<endl;
	}
	return 0;
}