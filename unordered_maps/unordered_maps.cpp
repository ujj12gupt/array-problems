#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>umap;
    umap["ujjwal"] = 44;
    umap["gfg"] = 56;
    umap["helloworld"] = 90;
    // iteration of unordered map
    for(auto x : umap)//every element of umap will be saved inside x
    {
        cout<<x.first<<" "<<x.second<<endl;
        // x.first refers to key of unordered map
        // x.second refers to key_value of unordered_map
    }
    cout<<"second method to iterate through unordered maps"<<endl;
    // itr is the pointer refering to first element of umap
    for(auto itr = umap.begin(); itr != umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    // find function in C++ is used to search for a specific key in an unordered map.
    // Syntax
    // unordered_map.find(key);
    // Return values: If the given key exists in unordered_map it 
    // returns an iterator to that element otherwise it returns the 
    // end of the map iterator.
    string key = "ujjwal";
    if(umap.find(key)!= umap.end())
    {
        cout<<"key found"<<endl;
    }
    else
    {
        cout<<"key not found"<<endl;
    }
    //  use of find function in unordered_map
    cout<<"finding key in unordered_map"<<endl;
    if(umap.find(key)!= umap.end())
    {
        auto temp = umap.find(key);
        // temp is iterator of key
        cout<<"key is:"<<temp->first<<endl;
        cout<<"value is:"<<temp->second<<endl;
    }
    // umap.insert
    // The make_pair() function, which comes under the Standard
    // Template Library of C++, is mainly used to construct a pair
    // object with two elements. In other words, it is a function that
    // creates a value pair without writing the types explicitly.

    // parameters
    // The make_pair() function accepts the following two parameters:

    // value1: The first value to construct the pair from.
    // value2: The second value to construct the pair from.
    cout<<"inserting an unordered map"<<"\n";
    umap.insert(make_pair("mobile",1700));
    for(auto itr = umap.begin(); itr != umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    // finding size of unordered map
    cout<<"size of unordered map is"<<endl;
    cout<<umap.size()<<"\n";
    // deleting a key from unordered map
    cout<<"deleting a key from unordered map"<<"\n";
    key = "helloworld";
    umap.erase(key);
    for(auto itr = umap.begin(); itr != umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    // application of unordered map
    int arr[] = {7,1,0,3,5,0,1,3,2,5,7,3,8,9,9};
    unordered_map<int,int>umaped;
    // here first int represents to the key
    // here second int represent to the number of counts corresponding to the key
    // initially second int is 0
    for(int i =0; i<15;i++)
    {
        int key = arr[i];
        umaped[key]++;
    }
    for(auto itr = umaped.begin(); itr != umaped.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}