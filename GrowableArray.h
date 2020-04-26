#include <iostream>
#include "Array.h"

using namespace std;

template <class T> 
class GrowableArray : public Array<T>{
	public: 
		GrowableArray(int size);
		virtual T &operator [] (int i);		
//		void push();
//		void push(T data);
};

template <class T> GrowableArray<T>::GrowableArray(int size){
	if(size<0){
		cout<<"Array bound error"<<endl;
		exit(0);
	}
	Array<T>::data = new T[size];

	Array<T>::len = size;
}

template <class T> T &GrowableArray<T>::operator[](int i){
//	cout<<Array<T>::data[i]<<endl;
	if(0<=i&&i<Array<T>::len){
		return Array<T>::data[i];
	}
	
	int newsize = Array<T>::len*2;
	int m=Array<T>::data[i];
//	cout<<"newsize"<<newsize<<endl;
	T *newdata = new T[newsize];
	//cout<<i<<Array<T>::data[i]<<endl;	
	int k;
	for(k=0;k<Array<T>::len;k++){
	//	cout<<k<<endl;
		newdata[k]=Array<T>::data[k];
	}
	int j;
	for(j=k;j<newsize;j++){
		
		newdata[j]=0;
	}
//	newdata[j]=m;
//	cout<<i<<endl;
/*	for(j=i+1;j<newsize;j++){

		newdata[j]=0;
	
	}*/
	Array<T>::data=newdata;
	Array<T>::len=newsize;
	return Array<T>::data[j];
}	


