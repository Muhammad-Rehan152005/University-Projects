
#ifndef OOPproject_SIMPLENODE_H
#define OOPproject_SIMPLENODE_H
class SimpleNode {
    int nodeId;
    int NeighborCount;
    SimpleNode *arrNeighbors;
public:
    static int checkn;
    SimpleNode();
    SimpleNode(int n);
    SimpleNode& operator=(const SimpleNode& A);
    void setid(int id);
    int getid()const;
    int getneighborcount();
    SimpleNode* getneighbor();
    void addEdge(const SimpleNode& n);
    ~SimpleNode();

};
#endif //OOPproject_SIMPLENODE_H
