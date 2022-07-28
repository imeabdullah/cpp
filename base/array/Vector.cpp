#include<bits/stdc++.h>

using namespace std;

template<class T>

class Vector
{
    int c=0;
    int minsize=100;
    T *arr;

    public:
    Vector()
    {
        arr= new T[100];
    }
    Vector(int size)
    {
        arr= new T[size];
        this->minsize=size;
    }
    Vector(int size,T iVal)
    {
        arr= new T[size];
        this->minsize=size;
        for(int i=0;i<size;i++)
            *(arr+1)=iVal;
    }
    void resize()
    {
        T *arr2=new T[this->minsize];
        for(int i=0;i<this->minsize;i++)
            arr2[i]=arr[i];

        delete[] arr;
        arr=nullptr;

        this->minsize=this->minsize*2;
        arr=new T[this->minsize];

        for(int i=0;i<this->minsize/2;i++)
            arr[i]=arr2[i];
        
        delete[] arr2;
        arr2=nullptr;
    }
    void push_back(T val)
    {
        if(this->c<minsize)
            arr[c]=val;
        else
        {
            this->resize();
            arr[c]=val;
        }
        c++;
    }

    void pop_back()
    {
        arr[c]=INT_MIN;
        c--;
    }

    void show()
    {
        for(int i=0;i<c;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

    int size()
    {
        return c;
    } 

    ~Vector()
    {
        delete[] arr;
    }
};

int main()
{
    Vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.show();
    cout<<"Size "<<vec.size()<<endl;
    vec.pop_back();
    vec.show();
    cout<<"Size "<<vec.size()<<endl;
}