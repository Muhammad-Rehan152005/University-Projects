#ifndef OOPproject_ATTRIBUTEDNODE2_H
#define OOPproject_ATTRIBUTEDNODE2_H
class AttributedNode2
{
    string Profession;
    string CityName;
public:
    AttributedNode2();
    void setProfession(string a);
    void setCity(string a);
    string getProfession()const;
    string getCity()const;
    ~AttributedNode2();
};
#endif