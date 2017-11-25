#include <iostream>
#include <vector>
#include <string>
#include <list>
// X00110033: Samir Kahvedzic


using namespace std;

#include <limits> // for numeric_limits
#include <set>
#include <utility> // for pair
#include <algorithm>
#include <iterator>
#include "DijkstrasAlgorithm.h"
#include "Vertex.h"
/***************************************************************************************

*    Usage: Largely Based On
*    Title: Dijkstra Algorithm
*    Author: LiterateProgram
*    Availability: http://rosettacode.org/wiki/Dijkstra%27s_algorithm#C.2B.2B
*
***************************************************************************************/

void DijkstrasAlgorithm::DijkstraComputePaths(int source, const std::vector<std::vector<Vertex> > &adjacency_list,
                          std::vector<double> &min_distance,
                          std::vector<int> &previous){
    int n = adjacency_list.size();
    min_distance.clear();
    min_distance.resize(n, numeric_limits<double>::infinity());
    min_distance[source] = 0;
    previous.clear();
    previous.resize(n, -1);
    std::set<std::pair<double, int> > vertex_queue;

    vertex_queue.insert(std::make_pair(min_distance[source], source));

    while (!vertex_queue.empty())
    {
        double dist = vertex_queue.begin()->first;
        int u = vertex_queue.begin()->second;
        vertex_queue.erase(vertex_queue.begin());

        // Visit each edge exiting u
        const std::vector<Vertex> &neighbors = adjacency_list[u];
        for (std::vector<Vertex>::const_iterator neighbor_iter = neighbors.begin();
             neighbor_iter != neighbors.end();
             neighbor_iter++)
        {
            int v = neighbor_iter->getId();
            double weight = neighbor_iter->getWeight();
            double distance_through_u = dist + weight;
            if (distance_through_u < min_distance[v]) {
                vertex_queue.erase(std::make_pair(min_distance[v], v));

                min_distance[v] = distance_through_u;
                previous[v] = u;
                vertex_queue.insert(std::make_pair(min_distance[v], v));
            }
        }
    }
}

std::list<char> DijkstrasAlgorithm::DijkstraGetShortestPathTo(int vertex, const std::vector<int> &previous){
    //Kap to create path
    char arrayOfChars[8] = {'a','b','c','d','e','f','g','h'};

    std::list<char> path;
    for ( ; vertex != -1; vertex = previous[vertex]) {
        //Vertex position
        path.push_front(arrayOfChars[vertex]);
    }
    return path;
}