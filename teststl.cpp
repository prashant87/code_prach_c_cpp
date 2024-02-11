#include<bits/stdc++.h>

using namespace std;


//pairs learn

void explainPair(){
    pair<int , int> p = {1, 3};
    cout <<p.first << "  "<<p.second<<endl;

    pair<int, pair <int, int>> d = {1, { 2, 3}};
    cout <<d.first << "  "<< d.second.first << "  "<< d.second.second<<endl;

    pair <int , int> arr[] = { {1,2}, {2,3}, {3,4}};
    cout<<arr[0].first<<"  " <<arr[2].second<<endl ;
}


void explainvector()
{
//     vector<int> v;
//     v.push_back(1);
//     v.emplace_back(2);

//     vector<pair <int, int>> vec2d;
//     vec2d.pop_back({2, 2});
//     vec2d.emplace_back(2,4);

        vector < int > v;

    for (int i = 0; i < 10; i++) {
        v.push_back(i); //inserting elements in the vector
    }

    cout << "the elements in the vector: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << * it << " ";

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());
    cout << "Now the first element is: " << v[0] << endl;

    if (v.empty())
        cout << "\nvector is empty";
    else
        cout << "\nvector is not empty" << endl;

    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size();

}

void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\n";
        s2.pop();
    }
}
int explainStack()
{
    stack<int> s;
    for(int i=1;i<=5;i++)
    s.push(i);
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    printstack(s);
    return 0;
}

void printlist(list<int> li)
{
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}


int explainList()
{
    list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);
    
    cout<<"The elements in the list are: ";
    printlist(li);
    cout<<"Reversing the list: ";
    li.reverse();
    printlist(li);
    cout<<"Sorting the list: ";
    li.sort();
    printlist(li);
    cout<<"The size of the list is: "<<li.size()<<endl;
    cout<<"The first element in the list: "<<li.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    li.pop_front();
    printlist(li);
    cout<<"The last element of the list: "<<li.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    li.pop_back();
    printlist(li);
    return 0;
}


// void printstack(stack<int> s1)
// {
//     stack<int> s2=s1;
//     while(!s2.empty())
//     {
//         cout<<s2.top()<<"\n";
//         s2.pop();
//     }
// }
// int explainStack()
// {
//     stack<int> s;
//     for(int i=1;i<=5;i++)
//     s.push(i);
    
//     cout<<"The elements of the stack are:"<<endl;
//     printstack(s);
    
//     cout<<"The size of the stack: "<<s.size()<<endl;
//     cout<<"The top element of the queue: "<<s.top()<<endl;
//     cout<<"Pop the top element: "<<endl;
//     s.pop();
//     printstack(s);
//     return 0;
// }

void printqueue(queue<int> q1)
{
    queue<int> q2=q1;
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}
int explainQueue()
{
    queue<int> q;
    for(int i=1;i<=5;i++)
    q.push(i);
    
    cout<<"The elements of the queue are:"<<endl;
    printqueue(q);
    
    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"The last element of the queue: "<<q.back()<<endl;
    cout<<"Pop the front element: "<<endl;
    q.pop();
    printqueue(q);
    return 0;
}


void printdeque(deque<int> dq)
{
    deque<int>::iterator it;
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int explainDeque()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);
    
    cout<<"The elements in the deque are: ";
    printdeque(dq);
    
    cout<<"The size of the deque is: "<<dq.size()<<endl;
    cout<<"The first element in the deque: "<<dq.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    dq.pop_front();
    printdeque(dq);
    cout<<"The last element of the deque: "<<dq.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    dq.pop_back();
    printdeque(dq);
    return 0;
}


void printpriorityqueue(priority_queue<int> pq)
{
    priority_queue<int> pq2=pq;
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
}
int explainPriorityQueue()
{
    priority_queue<int> pq;
    for(int i=1;i<=5;i++)
    pq.push(i);
    
    cout<<"The elements of the priority queue are:"<<endl;
    printpriorityqueue(pq);
    
    cout<<"The size of the priority queue: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    pq.pop();
    printpriorityqueue(pq);
    return 0;
}

int explainSet() {
    set < int > s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;

    cout << "The size of the set is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The set is not empty " << endl;
    else
        cout << "The set is empty" << endl;
    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
    return 0;
}


int explainMultiSet()
{
        multiset < int > s;
        for (int i = 1; i <= 10; i++) {
            s.insert(i);
        }
        s.insert(5);
        cout << "Elements present in the multiset: ";
        for (auto it = s.begin(); it != s.end(); it++) {
            cout << * it << " ";
        }
        cout << endl;
        int n = 2;
        if (s.find(2) != s.end())
            cout << n << " is present in multiset" << endl;

        s.erase(s.begin());
        cout << "Elements after deleting the first element: ";
        for (auto it = s.begin(); it != s.end(); it++) {
            cout << * it << " ";
        }
        cout << endl;

        cout << "The size of the multiset is: " << s.size() << endl;

        if (s.empty() == false)
            cout << "The multiset is not empty " << endl;
        else
            cout << "The multiset is empty" << endl;
        s.clear();
        cout << "Size of the multiset after clearing all the elements: " << s.size();
        return 0;

}


int explainUnorderedSet() {
    unordered_set < int > s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in unordered set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;

    cout << "The size of the unordered set is: " << s.size() << endl;
    if (s.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
    return 0;
}


int explainMap() {
    map < int, int > mp;
    for (int i = 1; i <= 5; i++) {
        mp.insert({i , i * 10});
    }

    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in map" << endl;

    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    cout << "The size of the map is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;
    mp.clear();
    cout << "Size of the map after clearing all the elements: " << mp.size();
    return 0;
}


int explainUnorderedMap() {
    unordered_map < int, int > mp;
    for (int i = 1; i <= 5; i++) {
        mp.insert({ i , i * 10});
    }

    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in map" << endl;

    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    cout << "The size of the map is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;
    mp.clear();
    cout << "Size of the set after clearing all the elements: " << mp.size();
    return 0;
}



int explainMultiMap() {
        multimap < int, int > mp;
        for (int i = 1; i <= 5; i++) {
            mp.insert({i , i * 10});
        }
        mp.insert({4,40});

        cout << "Elements present in the multimap: " << endl;
        cout << "Key\tElement" << endl;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            cout << it -> first << "\t" << it -> second << endl;
        }

        int n = 2;
        if (mp.find(2) != mp.end())
            cout << n << " is present in multimap" << endl;

        mp.erase(mp.begin());
        cout << "Elements after deleting the first element: " << endl;
        cout << "Key\tElement" << endl;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            cout << it -> first << "\t" << it -> second << endl;
        }

        cout << "The size of the multimap is: " << mp.size() << endl;

        if (mp.empty() == false)
            cout << "The multimap is not empty " << endl;
        else
        cout << "The multimap is empty" << endl;
    mp.clear();
    cout << "Size of the multimap after clearing all the elements: " << mp.size();
    return 0;
}

int main(int argc, char* argv[])
{
    cout<<"Print Hello"<<endl;
    // explainPair();
    // explainvector();
    // explainStack();
    // explainList();
    // explainQueue();
    explainDeque();
    // explainPriorityQueue();
    // explainSet();
    // explainMultiSet();
    // explainUnorderedSet();

    // explainMap();
    // explainUnorderedMap();
    // explainMultiMap();

    return 0;
}