// X00110033: Samir Kahvedzic

#ifndef UNTITLED12_VERTEX_H
#define UNTITLED12_VERTEX_H

class Vertex{
private:
    int letter;
    double weight;
    int id;
public:
    Vertex(int id, double weight, char letter);
    ~Vertex();
    int getId()const{ return id;}
    double getWeight()const { return weight;}
    double getLetter()const { return letter;}
};

#endif //UNTITLED12_VERTEX_H
