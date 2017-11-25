// X00110033: Samir Kahvedzic

#ifndef UNTITLED12_DIJKSTRASALGORITHM_H
#define UNTITLED12_DIJKSTRASALGORITHM_H

#include "Vertex.h"

class DijkstrasAlgorithm {
public:
    void DijkstraComputePaths(int source, const std::vector<std::vector<Vertex> > &adjacency_list,
                                                  std::vector<double> &min_distance,
                                                  std::vector<int> &previous);
    std::list<char> DijkstraGetShortestPathTo(int vertex, const std::vector<int> &previous);
};


#endif //UNTITLED12_DIJKSTRASALGORITHM_H
