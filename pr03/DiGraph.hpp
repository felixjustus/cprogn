#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>

using namespace std;

#ifndef OOA_PRAKTIKUM_3_DIGRAPH_HPP
#define OOA_PRAKTIKUM_3_DIGRAPH_HPP

#include <iostream>
#include <string>
#include "Node.hpp"

using namespace std;

class DiGraph {
private:
    /* Array von Zeigern auf Knoten mit dem Bezeichner nodes, in dem alle Knoten
       des Graphen gespeichert sind. */
    vector<Node*> nodes;

    Node* findNode(string &key);

    // Checkt ob Node schon im vector ist
    bool doesExist(vector<Node*> &list, Node * node);

public:
    // Gibt den Speicher wieder frei
    ~DiGraph();

    // Fügt die Adresse eines Klassenobjekts vom Typ Node dem Graphen hinzu.
    void addNode(string key);

    /* Erstellt ein neues Klassenobjekt vom Typ Edge mit Startknoten key1, End-
       knoten key2 sowie einem Kantengewicht von weight. Anschließend wird die
       Kante der Adjazenzliste des Knotens key1 hinzugefügt. */
    void addEdge(string key1, string key2, float weight);

    /* Gibt eine Liste aller benachbarter Knoten des Knotens mit dem Schlüssel key
       zurück. */
    vector<Node*> getNeighbours(string key);

    /* Gibt eine Liste aller abgehenden Kanten des Knotens mit dem Schlüssel key
       zurück. */
    vector<Edge*> getEdges(string key);

    // Gibt eine Liste aller Knoten des Graphen zurück.
    vector<Node*> getNodes();
};

#endif //OOA_PRAKTIKUM_3_DIGRAPH_HPP
