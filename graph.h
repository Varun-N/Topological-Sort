#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <unordered_map>
#include <list>
#include <queue>
#include <sstream>
#include <fstream>

using namespace std;

//edits to this are likely not needed
template <class T>
struct Vertex {
  T label; // unique int for a vertex
  vector<T> adj_list;
  int indegree; // Part 2: number of nodes pointing in
  int top_num; // Part 2: topological sorting number
  Vertex(T l) : label(l) {top_num = 0; label = l;} //Part 1
};

// optional, but probably helpful
// template <class T>
// ostream& operator<<(ostream &o, Vertex<T> v){};


// syntax for custom compare functor
// template<class T>
// class VertexCompare
// {
// public:
//   bool operator()(Vertex<T> v1, Vertex<T> v2){
//     //todo - implement
//     return false;
//   }
// };

template <class T>
class Graph {
private:
  //c++ stl hash table
  // unordered_map<T, Vertex<T>> node_set;
  //Use other data fields if needed
public:
  Graph() {};  // default constructor
  ~Graph() {};
  // build a graph
  void buildGraph(istream &input){}

  // display the graph into o
  void displayGraph(ostream& o){}

  //return the vertex at label, else throw any exception
  Vertex<T> at(T label){}

  //return the graph size (number verticies)
  int size(){}

  // topological sort
  // return true if successful, false on failure (cycle)
  bool topological_sort(){}; // Part 2

  // find indegree
  void compute_indegree(){}; // Part 2


  // print topological sort into o
  //  if addNewline is true insert newline into stream
  void print_top_sort(ostream& o, bool addNewline=true)
  { 
    //TODO - implement things here
    
    if(addNewline){o << '\n';};
  }; // Part 2
};

#endif
