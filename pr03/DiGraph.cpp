#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>

using namespace std;

void addNode(int Node, int node){

}


void addEdge(std::string key1, std::string key2, float weight){

}


Liste<Node*> getNeighbours(std::string key){

}


Liste<Edge*> getEdges(std::string Key){

}


Liste<Node*> getNodes(){

}

//Nodes** nodes 

void main(){

}



/*
#include "DiGraph.hpp"

// private:
Node* DiGraph::findNode(string &key) {
    for (Node* node : nodes)    // for-each loop | (for each Node*  in  nodes)
        if (node->getKey() == key)
            return node;

    cout << "Konnte Knoten \"" << key << "\" nicht finden!" << endl;
    return nullptr;
}

bool DiGraph::doesExist(vector<Node*> &list, Node * node) {
    for (Node * nodeSearch : list)
        if (nodeSearch == node)
            return true;

    return false;
}


// public:
DiGraph::~DiGraph() {
    for (Node * node : nodes) {
        for (Edge * edge : node->getEdges()) {
            delete edge;
        }
        delete node;
    }
}

void DiGraph::addNode(string key) {
    Node * newNode = new Node(key);
    nodes.push_back(newNode);
}

void DiGraph::addEdge(string key1, string key2, float weight) {
    Node * startNode = findNode(key1);
    Node * endNode = findNode(key2);

    Edge * newEdge = new Edge(startNode, endNode, weight);

    startNode->addEdge(newEdge);
}

vector<Node*> DiGraph::getNeighbours(string key) {
    Node * node = findNode(key);

    vector<Node*> neighbours;
    if (node == nullptr)
        return neighbours; // return empty vector

    // Add all outwards facing edges
    for (Edge * edge : node->getEdges())
        neighbours.push_back(edge->getEndNode());

    for (Node * nodeSearch : nodes)
        for (Edge * edgeSearch : nodeSearch->getEdges())
            if (edgeSearch->getEndNode() == node && !doesExist(neighbours, nodeSearch))
                neighbours.push_back(nodeSearch);
}

vector<Edge*> DiGraph::getEdges(string key) {
    return vector<Edge*>(findNode(key)->getEdges());    // return a COPY of the edges (from 'key')
}

vector<Node*> DiGraph::getNodes() {
    return vector<Node*>(nodes);    // return a COPY of the nodes
}
*/