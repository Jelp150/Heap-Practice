include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Node
{
  public:
  int data;
  Node * next = nullptr;
  Node * previous = nullptr;
  Node(int data)
  {

  }

}
void add_Node(int number, Node * root)
{
Node * temp = root;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  Node * 

}

int main()
{
  int q, operation, number;
  cin >> q >> operation >> number;
  Node * root = nullptr;
  switch (operation)
  {
    case 1:
//insert
      break;
    case 2:
    //delete
      break;
    case 3:
    //print min
      break;
  }
}
//idk good luck
