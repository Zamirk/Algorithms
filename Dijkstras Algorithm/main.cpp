// X00110033: Samir Kahvedzic

#include <iostream>
#include <vector>
#include <list>
#include "DijkstrasAlgorithm.h"
#include <iterator>
using namespace std;

int main(){

    //The Dijkstra Algorithm
    DijkstrasAlgorithm dijkstrasAlgorithm;

    //Creating the list of vertices
    vector<vector<Vertex> > graph(8);

    char arrayOfChars[8] = {'a','b','c','d','e','f','g','h'};
    vector<double> distance;
    vector<int> previous;

    //Char, weight, id of neighbour,
    graph[0].push_back(Vertex(1, 6, 'a'));
    graph[0].push_back(Vertex(3, 8, 'a'));
    graph[0].push_back(Vertex(4, 4, 'a'));

    graph[1].push_back(Vertex(0, 6, 'b'));
    graph[1].push_back(Vertex(2, 6, 'b'));
    graph[1].push_back(Vertex(4, 2, 'b'));
    graph[1].push_back(Vertex(5, 4, 'b'));
    graph[1].push_back(Vertex(7, 1, 'b'));

    graph[2].push_back(Vertex(6, 3, 'c'));
    graph[2].push_back(Vertex(6, 3, 'c'));

    graph[3].push_back(Vertex(0, 8, 'd'));
    graph[3].push_back(Vertex(6, 7, 'd'));

    graph[4].push_back(Vertex(0, 4, 'e'));
    graph[4].push_back(Vertex(1, 2, 'e'));

    graph[5].push_back(Vertex(1, 4, 'f'));
    graph[5].push_back(Vertex(6, 5, 'f'));
    graph[5].push_back(Vertex(7, 3, 'f'));

    graph[6].push_back(Vertex(2, 3, 'g'));
    graph[6].push_back(Vertex(3, 7, 'g'));
    graph[6].push_back(Vertex(5, 5, 'g'));

    graph[7].push_back(Vertex(1, 1, 'h'));
    graph[7].push_back(Vertex(5, 3, 'h'));

    int startVertex;
        cout << "Enter vertex(a valid character) to start from" << endl;
        cout << "[a,b,c,d,e,f,g,h]" << endl;
        string enter = "";
        cin >> enter;

    if(enter == "a" || enter == "A" ){
        startVertex = 0;
    } else if(enter == "b" || enter == "B" ){
        startVertex = 1;
    } else if(enter == "c" || enter == "C" ){
        startVertex = 2;
    } else if(enter == "d" || enter == "C"){
        startVertex = 3;
    } else if(enter == "e" || enter == "E" ){
        startVertex = 4;
    } else if(enter == "f" || enter == "F"){
        startVertex = 5;
    } else if(enter == "g" || enter == "F"){
        startVertex = 6;
    } else if(enter == "h" || enter == "H"){
        startVertex = 7;
    }
    cout << "ffff" << startVertex << endl;
        //Implementing the dijkstra Algorithm
        dijkstrasAlgorithm.DijkstraComputePaths(startVertex, graph, distance, previous);

        cout << "  Route\t\tDistance\tPath" << endl;

        for (int i = 0; i < 8; i++) {
            //Route
            cout << "[" << arrayOfChars[startVertex] << " to " << arrayOfChars[i] << "] ";
            list<char> path = dijkstrasAlgorithm.DijkstraGetShortestPathTo(i, previous);
            //Distance
            cout << "\t   " << distance[i] << "\t\t";
            //Path
            copy(path.begin(), path.end(), std::ostream_iterator<char>(std::cout, " "));
            cout << endl;
        }

    system("pause");

    return 0;
}