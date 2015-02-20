#include<iostream>
#include <vector>
#include <string>
#include <list>
 
#include <limits> // for numeric_limits
 
#include <set>
#include <utility> // for pair
#include <algorithm>
#include <iterator>
 
 
using namespace std;
typedef int vertex_t;
typedef double weight_t;
 
const weight_t max_weight = std::numeric_limits<double>::infinity();
 
 
struct neighbor {
    vertex_t target;
    weight_t weight;
    neighbor(vertex_t arg_target, weight_t arg_weight)
        : target(arg_target), weight(arg_weight) { }
};
 
typedef std::vector<std::vector<neighbor> > adjacency_list_t;
 
 
void insert(std::vector<neighbor> &vicky, int b, double weight);
void printperi(adjacency_list_t al);
 
 void DijkstraComputePaths(vertex_t source,
                          const adjacency_list_t &adjacency_list,
                          std::vector<weight_t> &min_distance,
                          std::vector<vertex_t> &previous)
{
    int n = adjacency_list.size();
    min_distance.clear();
    min_distance.resize(n, max_weight);
    min_distance[source] = 0;
    previous.clear();
    previous.resize(n, -1);
    std::set<std::pair<weight_t, vertex_t> > vertex_queue;
    vertex_queue.insert(std::make_pair(min_distance[source], source));
 
    while (!vertex_queue.empty()) 
    {
        weight_t dist = vertex_queue.begin()->first;
        vertex_t u = vertex_queue.begin()->second;
        vertex_queue.erase(vertex_queue.begin());
 
        // Visit each edge exiting u
	const std::vector<neighbor> &neighbors = adjacency_list[u];
        for (std::vector<neighbor>::const_iterator neighbor_iter = neighbors.begin();
             neighbor_iter != neighbors.end();
             neighbor_iter++)
        {
            vertex_t v = neighbor_iter->target;
            weight_t weight = neighbor_iter->weight;
            weight_t distance_through_u = dist + weight;
	    if (distance_through_u < min_distance[v]) {
	        vertex_queue.erase(std::make_pair(min_distance[v], v));
 
	        min_distance[v] = distance_through_u;
	        previous[v] = u;
	        vertex_queue.insert(std::make_pair(min_distance[v], v));
 
	    }
 
        }
    }
}
 
 
std::list<vertex_t> DijkstraGetShortestPathTo(
    vertex_t vertex, const std::vector<vertex_t> &previous)
{
    std::list<vertex_t> path;
    for ( ; vertex != -1; vertex = previous[vertex])
        path.push_front(vertex);
    return path;
}
 
 
 
 
 
int main()
{
    
    int n,m;
    cin>>n;
    cin>>m;
    //cout<<n<<m;
    
    adjacency_list_t adjacency_list(n);
    
    for(int i=0;i<m;i++){
            
            int a,b;
            cin>>a;
            cin>>b;
            
            if(a==b)continue;
            a--;
            b--;
            
            
            insert(adjacency_list[a],b,0);
            insert(adjacency_list[b],a,1);
            
            }
            
   // printperi(adjacency_list);
    
    std::vector<weight_t> min_distance;
    std::vector<vertex_t> previous;
    DijkstraComputePaths(0, adjacency_list, min_distance, previous);
    int dist = min_distance[n-1];
    if(0<=dist&&dist<=100000)
    std::cout <<  dist << std::endl;
    else std::cout<<"-1"<<std::endl;
   
    
 //system("pause");   
}
 
void insert(std::vector<neighbor> & vicky, int b, double weight)
{
     
      for (int i = 0;i<vicky.size();i++)
        {
             
            vertex_t v = vicky[i].target;
            weight_t w = vicky[i].weight;
            
            if(v==b){
                     if(weight<w){//modify weight
                   //  cout<<"executed\n";
                    vicky[i].weight=weight;//(b,weight);
                          return;
                          }
                     else{//do nothing
                          return;
                          }
                     }
	    }
	    
 
  vicky.push_back(neighbor(b,weight));
  return;
     
}
 
void printperi(adjacency_list_t al)
{
 
printf("%d \n",al.size());  
 
for(int i=0;i<al.size();i++)  {
        
        std::vector<neighbor> vicky = al[i];
        for (std::vector<neighbor>::const_iterator neighbor_iter = vicky.begin();
             neighbor_iter != vicky.end();
             neighbor_iter++)
        {
             vertex_t v = neighbor_iter->target;
            weight_t w = neighbor_iter->weight;
            
            printf("(%d %lf)",v+1,w);
             
             }
             printf("\n");
        
        }
     
}
 
