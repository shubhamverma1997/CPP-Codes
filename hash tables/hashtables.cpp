#include<iostream>
#include<cstring>
using namespace std;

template <typename V>
class hashNode //this is not for the hash table but  for each element of the hash table; it is like a node of linked list;
{
public:
    char*key;
    V value;
    hashNode<V> *next;

    hashNode(char *k,V val)
    {
        key=new char(strlen(k)+1);
        strcpy(key,k);
        next=NULL;
        value=val;
    }
    ~hashNode()//it will act as a recursive function
    {
        if(next!=NULL)
            delete next;
        delete [] key;
    }
};


// this will act as a hashtable

template <typename V>
class hashTable
{
    private:
    int current_size;
    int table_size;
    hashNode<V> **buckets;

    void rehash();
    int hashFunction();
    {
        int ans=0;
        int L=strlen(key);
        int power=1;
        for(int i=0;i<L;i++)
        {
            ans=ans+key[L-i-1]*power;
            ans=ans%table_size;
            power=power*37;
            power%=table_size;
        }
        return ans;
    }

    public:
    void insert(char*key,V value)
    {
        int index=hashFunction(key);
    }
    HashTable()
    {
        current_size=0;
        table_size=7;
        buckets=new hashNode<V>*[table_size];
        for(int i=0;i<table_size;i++)
            buckets[i]==NULL;
    }
};


